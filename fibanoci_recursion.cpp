#include<iostream>
using namespace std;

int fibanoci(int n){

	if(n==0){

		return 0;
	}

	if(n==1){

		return 1;
	}

	return fibanoci(n-1) + fibanoci(n-2);
}

int main(){

	int n;

	cin>>n;

	int ans=fibanoci(n);

	cout<<ans<<" ";
}
