#include<bits/stdc++.h>
using namespace std ;

int returnSubsetHelper(int *input , int startIndex , int n , int output[][20]){

	if(startIndex == n){
		output[0][0] = 0 ;
		return 1 ;
	}

	int smallSize = returnSubsetHelper(input , startIndex+1 , n , output) ;

	for(int i = 0 ; i < smallSize ; ++i){
		
		output[i+smallSize][0] = output[i][0]+1;
		output[i+smallSize][1] = input[startIndex] ;

		for(int j = 1 ; j <= output[i][0] ; ++j){
			output[i+smallSize][j+1] = output[i][j] ;
		}
	}

	return 2*smallSize ;
}

int returnSubset(int *input , int n , int output[][20]){

	return returnSubsetHelper(input , 0 , n , output );
}

int main(){

	int n ;
	cin>>n;

	int *input = new int[n] ;

	for(int i = 0 ; i < n ; ++i){
		cin>>input[i] ;
	}

	int output[1000][20] ;

	int size = returnSubset(input , n , output) ;

	for(int i = 0 ; i < size ; ++i){
		for(int j = 1 ; j <=output[i][0] ; ++j){
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}

	delete []input ;
}