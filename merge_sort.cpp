#include<iostream>
using namespace std;

void merge(int arr[],int start,int mid, int end){

	int output[end-start+1];

	int i=start;

	int j=mid+1;

	int k=0;

	while(i<=mid && j<= end){

		if(arr[i]< arr[j]){

			output[k]=arr[i];

			i++;

			k++;
		}

		else{

			output[k]=arr[j];

			j++;

			k++;
		}
	}

	while(i<=mid){

		output[k]=arr[i];

			i++;

			k++;
	}

	while(j<=end){

		output[k]=arr[j];

			j++;

			k++;
	}

	int m=0;

	for(int i=start; i<=end; i++){

		arr[i]=output[m];

		m++;
	}
}

void merge_sort(int arr[], int startindex, int endindex){

	if(startindex>=endindex){

		return;
	}

	int mid=(startindex+endindex)/2;

	merge_sort(arr,startindex,mid);

	merge_sort(arr,mid+1,endindex);

	merge(arr,startindex,mid,endindex);



}

int main(){

	int n;

	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++){

		cin>>arr[i];
	}


	merge_sort(arr,0,n);

	for(int i=1;i<=n; i++){

		cout<<arr[i]<<" ";
	}
}
