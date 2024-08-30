#include<iostream>
using namespace std;

void bubble_sort(int input[], int endindex){

	if(endindex==0){

		return;
	}

	for(int i=0; i<endindex; i++){

		if(input[i]>input[i+1]){

		int temp= input[i];

		input[i]=input[i+1];

		input[i+1]=temp;

        	}
	}

 bubble_sort(input,endindex-1);
}

void selection_sort(int input [],int startindex,int size){

	if(startindex>=size-1){

		return;
	}

	int minIindex=startindex;

	for(int i=startindex;i<size;i++){

		if(input[i]<input[minIindex]){

			minIindex=i;
		}
	}

	int temp=input[minIindex];

	input[minIindex]=input[startindex];
	input[startindex]=temp;

	selection_sort(input,startindex+1,size);
}

int main(){

	int arr[]={3,6,2,4,1};

	bubble_sort(arr,4);

	for(int i=0;i<5;i++){

		cout<<arr[i]<<" "<<endl;
	}

	int arr2[]={3,6,2,4,1};

	selection_sort(arr2,0,5);

	cout<<"selection_sort"<<endl;

	for(int i=0;i<5;i++){

	

		cout<<arr2[i]<<" ";
	}
}
