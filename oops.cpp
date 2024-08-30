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

int insert_node(node* head, int x){

	int index=0;

	node *temp=head;


	while(temp !=NULL){

		if(temp->data==x){

			return index;
		}

		temp=temp->next;
		index++;
	}

	return -1;

	
    
}

void print(node *head){

	while(head!=NULL){

		cout<<head->data<<" ";

		head=head->next;
	}
}

int main(){

	node *head=take_input();

	//print(head);

	int x=9;

	int ans=insert_node(head,x);

	//print(head);

	cout<<ans;
}
