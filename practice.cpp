#include<bits/stdc++.h>
using namespace std ;

void printSubsetHelper(int *input , int startIndex , int n , int *output , int oSize){

  if(startIndex == n){
    for(int i = 0 ; i < oSize ; ++i){
      cout<<output[i]<<" ";
    }
    cout<<endl;
    return ;
  }

  int smallOutput[40] ;


  printSubsetHelper(input , startIndex+1  , n , output , oSize) ;

  int i ;

  for(i = 0 ; i < oSize ; ++i){
    smallOutput[i] = output[i] ;
  }
  smallOutput[i] = input[startIndex] ;

  printSubsetHelper(input , startIndex+1 , n , smallOutput , oSize+1) ;
}

void printSubset(int *input , int n){

  int *output = new int[100] ;

  printSubsetHelper(input , 0 , n , output , 0) ;
}

int main(){

  int n ;
  cin>>n;

  int *input = new int[n] ;

  for(int i = 0 ; i < n ; ++i){

    cin>>input[i] ;
  }

  printSubset(input , n) ;

  delete []input ;
}