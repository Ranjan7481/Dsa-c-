#include<iostream>
using namespace std;

int sumn(int *arr, int size){

	// base case

	if(size <= 0){

	   return 0;
	   
	}

	int sum=arr[0];

	sum=sum+sumn(arr+1,size-1);

	return sum;
}

int main(){


	int size=5;

	int arr[size];

	for(int i=0; i<size; i++){


	     cin>>arr[i];
	}

	int result= sumn(arr,size);

	cout<<result;
}


