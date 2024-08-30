#include<iostream>
using namespace std;

#include"practise3.cpp"

node * takeinput(){

    int data;

    cin>>data;

    node *head=NULL;
     node * tail=NULL;

    while(data !=-1){

     node *newnode=new node(data);

     if(head==NULL){

      head=newnode;

      tail=newnode;
       
       }
    
    
    else{

        tail ->next=newnode;

        tail=tail->next;


    }

        cin >>data;
    }


    return head;
}


void mid_point(node*head){

    node* slow=head;

    node *fast=head;

    if(head!=NULL){


    while(fast!=NULL && fast->next!=NULL){

     fast=fast->next->next;

        slow=slow->next;
     }
        cout<<slow->data;


}


    
}



void print (node *head ){

    while(head !=NULL){

       cout<<head->data<<" ";

        head=head->next;
    }
  
  }

int main(){
    

    node * head=takeinput();

    
  //  print(head);

    mid_point(head);

    
   

    
   



}
