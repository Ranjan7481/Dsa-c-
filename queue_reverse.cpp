#include<iostream>
using namespace std;

#include<queue>

void reverse_queue(queue<int >&s){

	if(s.empty()){

		return;
	}else{

		int x=s.front();

		s.pop();

		reverse_queue(s);

		s.push(x);


	}
}

int main(){

	queue<int>s;

	for(int i=0;i<5;i++){

		int x;
		cin>>x;

		s.push(x);
	}

	reverse_queue(s);

	while(!s.empty()){

		cout<<s.front()<<endl;

		s.pop();
	}
}
