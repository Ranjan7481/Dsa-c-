#include<iostream>
using namespace std;
#include<stack>

void solve(stack<int>&inputstack,int count,int size){

	//base case

	if(count==size/2){

		inputstack.pop();

		return;
	}

	int num=inputstack.top();

	inputstack.pop();

	//recursive call

	solve(inputstack,count+1,size);

	inputstack.push(num);
}

void delete_middle(stack<int>&inputstack,int size){


	int count=0;

	solve(inputstack,count,size);


}

int main(){


	stack<int>s;

	for(int i=0; i<5;i++){

		int x;

		cin>>x;
		s.push(x);
	}

	delete_middle(s,5);

	while(!s.empty()){

		cout<<s.top()<<endl;

		s.pop();
	}
}
