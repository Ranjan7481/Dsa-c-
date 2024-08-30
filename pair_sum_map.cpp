#include<iostream>
using namespace std;
#include<unordered_map>

int pair_sum(int *arr, int size){

	 unordered_map<int,bool>seen;

	 int sum;

	 for(int i=0; i<size; i++){

	 	for(int j=i+1; j<size; j++){

	 		if(arr[i]==arr[j]){

	 			sum=arr[i]+arr[j];
	 		}
	 	}
	 	}

	 	//seen[arr[i]]=true;

	 	//sum=+arr[i];
	 

	 return sum;
}

int main(){


	int arr[]={1,2,2,2,5};

	int result=pair_sum(arr,5);

	cout<<result;
}
