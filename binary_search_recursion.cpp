#include<iostream>
using namespace std;

int binary_search(int arr[], int x,int first, int last){

	if(first> last){

		return -1;
	}

	int mid= (first + last)/2;

	if(arr[mid] == x){

		return mid;
	}

	else if(arr[mid]>x){

		return binary_search(arr,x,first,mid-1);
	}

	else if(arr[mid]<x){

		return binary_search(arr,x,mid+1,last);
	}
}   

int main(){

	int arr[]={1,2,3,4,5,6};

	cout<<binary_search(arr,4,0,5)<<endl;
}
