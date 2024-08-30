#include<iostream>
using namespace std ;

int solve(int n){

	if(n== 0){
		return 0;
	}

	int smallAns = solve(n/10) ;

	return smallAns+1;
}

int main(){

	int n ;
	cin>>n;

	int ans = solve(n) ;

	cout<<ans;
}