#include<iostream>
using namespace std;

bool display(int arr[],int n,int k){


	if(n==0){

		return false;

	}

	if(arr[0]==k){

		return true;
	}




	return display(arr+1,n-1,k);

}

int main(){

	int n;

	

	cin>>n;
	int k;
	cin>>k;

	
	int arr[]={1,5,7};


	int result=display(arr,n,k);

	if(result){

		cout<<"the number is present ";

	}else{


		cout<<"the number is not present ";
	}

	
}

