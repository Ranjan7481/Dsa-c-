#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

	int pivot=arr[s];

	int count =0;

	for(int i=s+1; i<=e; i++){

		if(arr[i]<= pivot){

		count++;
	}
	}
  //place pivot at right place

	int pivotindex=s+count;

	swap(arr[pivotindex], arr[s]);

	//right and left sort krte hai

	int i=s, j=e;

	while(i < pivotindex && j > pivotindex){
	
	
	// agr i ka value piviot se chota rha aur j k piviot se bda rha to aage move kr jaynege

		while(arr[i] <= pivot)
		{
			i++;
		}

		while(arr[j] > pivot)
		{

			j--;
		}

		//remainig number agr piviot se bda ya chota rha to swap kr denge 

		if(i <= pivotindex && j > pivotindex){

			swap(arr[i++] , arr[j--]);
		}
	}

	return pivotindex;
}


void quicksort(int arr[], int s, int e){ 

	if( s>= e)

		return;

	int p=partition(arr,s,e);

	//left sort kro

	quicksort(arr,s,p-1);

	//right sort kro

	quicksort(arr,p+1,e);
}
int main(){

	int arr[10]={2 , 4 , 3 , 8 , 5 , 1};

	int n=6;

	quicksort(arr,0,n-1);

	for(int i=0; i< n; i++){

		cout<<arr[i]<<" ";

	}cout<<endl;

	

	return 0;
}
