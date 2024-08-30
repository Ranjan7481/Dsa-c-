#include<iostream>
using namespace std;

#include<stack>

void reverse_stack(stack<int>s){

	if(s.size()<=1){

		return;
	}

	int x=s.top();

	s.pop();

	reverse_stack(s);
	
	s.push(x);
}



int main(){

	stack<int>s;

	for(int i=0; i<5;i++){

		int x;

		cin>>x;
		s.push(x);
	}

	reverse_stack(s);

	while(!s.empty()){

		cout<<s.top()<<endl;

		s.pop();
	}
}
