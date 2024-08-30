#include<iostream>
using namespace std;

void sort(int arr[], int n){

	for(int i=0; i<n; i++){


		if(arr[i] > arr[i+1]){

			swap(arr[i],arr[i+1]);
		}
	}

	for(int i=0; i<n; i++){

		cout<<arr[i];
	}
}

int main(){

	int n=5;


	int arr[n]={0,2,1,0,3};

	sort(arr,n);

}
