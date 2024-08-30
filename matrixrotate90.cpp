#include<iostream>
using namespace std;


void matrix(int n){



	int mat[n][n]={{1,2,3},

	              {4,5,6},

	              {7,8,9}};


	//transpose of matrix";

	for(int i=0;i<n;i++){

		for(int j=0;j<i;j++){


			swap(mat[i][j],mat[j][i]);
		}
	}
	cout<<"transpose of matrix";

	for(int i=0;i<n;i++){

		cout<<endl;

	for(int j=0;j<n;j++){

	  cout<<mat[i][j]<<" ";
		
		}
	}

	//interchange

	for(int i=0;i<n/2;i++){


	for(int j=0;j<n;j++){


	swap(mat[i][j],mat[n-1-i][j]);

			
		}
		cout<<endl;
	}

	cout<<"rotate of matrix";

	for(int i=0;i<n;i++){

		cout<<endl;

	for(int j=0;j<n;j++){

	  cout<<mat[i][j]<<" ";}
	}
		
}

int main(){


	int n;
	cin>>n;

	matrix( n);


}
