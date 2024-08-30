#include<iostream>
using namespace std;

template<typename t>

class node{
public:

	t data;

	node<t> *next;

	node(t data){

		this->data=data;

		next=NULL;

	}
};

template<typename t>
class stack{

	node <t> * head;

	int size;

public:


	stack(){

	}

	int getsize(){

		return size;

	}

	bool isEmpty(){

		return size==0;

	}

	void push(t element){

		node<t> *newnode= new node<t>(element);

		newnode ->next=head;

		head= newnode;

		size ++;

	}

	t top(){

		if (isEmpty()){

			return 0;
		}

		return head->data;
	}

		
	

	t pop(){

		if (isEmpty()){

			return 0;
		}

		t ans =head-> data;

		node<t>* temp=head;

		head= head->next;

		delete temp;

		size--;

		return ans;

	}
	
};