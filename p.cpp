#include<iostream>
using namespace std;

int result(int n){

	if(n==0){

		return 1;
	}

	int ans=n*result(n-1);

	return ans;
}

int main(){

	int n;

	cin>>n;

	int solve=result(n);

	cout<<solve;
}
