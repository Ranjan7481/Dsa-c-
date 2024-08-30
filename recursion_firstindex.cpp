#include<iostream>
using namespace std;

int first_index(int arr[],int size,int x){


	if(size==0){

		return -1;
	}

	if(arr[0]==x){

		return 0;
	}

	int ans=first_index(arr+1,size-1,x);

	
      if(ans== -1){

      	return -1;
      }else{

      	return ans +1;
      }
}

int main(){


	int size;

	cin>>size;
	int x;

	cin>>x;

	int arr[size]={1,6,3,4,5,6};

	int result=first_index(arr,size,x);


	cout<<result;


}
