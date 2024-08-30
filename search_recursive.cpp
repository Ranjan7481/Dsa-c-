#include<iostream>
using namespace std;

bool search(int *arr, int size ,int key){

	// base case

	if(size <= 0){

		return 0;
	}

	if(arr[0]==key)

		return true;

	return search(arr+1,size-1,key);
}

int main(){


	int size=5;

	int arr[size];

	for(int i=0; i<size; i++){


		cin>>arr[i];
	}

	int result= search(arr,size,8);

	cout<<result;
}

