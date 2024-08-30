#include<iostream>
using namespace std;

void check(int*arr, int n){

	for(int i=0; i<n; i++){

		for(int j=0; j<n; j++){

			if(arr[i]>=arr[j]){

				arr[i]=arr[j];
			}
		}
	}

	for (int i = 0; i <n; ++i)
	{
		/* code */
		cout<<arr[i];
	}

	

}

int main(){

	int arr []= {0 ,2, 1, 2, 0};

	int target=3;

	check(arr,5);

	
}
