#include<iostream>
using namespace std;

#include"practise3.cpp"

node *take_input(){

	int data;

	cin>>data;

	node*head=NULL;

	node * tail=NULL;

	while(data !=-1){

		node *newnode=new node(data);

		if(head==NULL){

			head=newnode;

			tail=newnode;
		} else{

			tail ->next=newnode;

			tail=tail->next;


		}

		cin>>data;
	}

	return head;
}

void insert_node(node* head,int i, int data){

	node * newnode=new node(data);

	int count=0;

	node*temp=head;

	while (temp !=NULL &&count<=i-1){

		temp=temp->next;

		count++;
	}

	if(temp!=NULL){

	 node *a=temp->next;

	 temp->next=newnode;

	 newnode->next=a;
    }

    
}

void print(node *head){

	while(head!=NULL){

		cout<<head->data<<" ";

		head=head->next;
	}
}

int main(){

	node *head=take_input();

	print(head);

	int i,data;

	cin>>i>>data;

	insert_node(head,i,data);

	print(head);
}
