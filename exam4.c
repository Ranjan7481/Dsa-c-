#include<stdio.h>

void bubble_sort(int *arr,int n){

	for(int i=0;i<n;i++){

		for(int j=i+1; j<n-1; j++){

			if(arr[i] >arr[j+1]){

				int temp=arr[i];

				arr[i]=arr[j+1];

				arr[j+1]=temp;
			}
		}
	}

		for(int i=0;i<n;i++){

		printf(" %d ",arr[i]);
	
	  }
}

void selection_sort(int *arr,int n){

	for(int i=0; i<n;i++){

		int index=i;

		for(int j=i+1; j<n;j++){

			if(arr[j]<arr[index]){

				index=j;
			}

			
		}

		int temp=arr[index];

			arr[index]=arr[i];

			arr[i]=temp;
	}

	for(int i=0; i<n;i++){

		printf(" %d ",arr[i]);
	}
}

void insertion_sort(int *arr,int n){

	for(int i=1; i<n; i++){

		int current=arr[i];

		int j=i-1;

		while(arr[j]> current && j>=0){

			arr[j+1]=arr[j];

			j--;
		}

		arr[j+1]=current;
	}

	for(int i=0; i<n;i++){

		printf(" %d ",arr[i]);
	}
}

int main(){

	int n=10; 

	int arr[n]={3,2,5,10,1,13,28,12,9,7};

	selection_sort(arr,n);

	printf("\n");

	bubble_sort(arr,n);

	printf("\n");

	insertion_sort(arr,n);


}