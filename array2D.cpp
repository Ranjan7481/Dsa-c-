#include<iostream>
using namespace std;
 

         //pass by reference

  void print(int arr [][100],int n, int m){

           //print 

  	for(int i=0; i<n; i++){

  		for(int j=0; j<m; j++){


  			cout<<arr[i][j]<<" ";
  		}

  		cout<<endl;
  	}
  }

int main(){

	int arr[1000][100];

	int n ,m;

	cin>>n>>m;

	 
	 for(int i=0; i<n; i++){

		 
		 for(int j=0; j<m; j++){

			
			cin>>arr[i][j];
		}
	}

	print(arr,n,m);
}
