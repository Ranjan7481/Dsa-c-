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


node *reverse_list(node *head){

    node *new_head=NULL;

    while(head != NULL){

        node *temp=head;

        head=head->next;

        temp->next=new_head;

        new_head=temp;


    }

    return new_head;
}



void print (node *head ){

    while(head !=NULL){

       cout<<head->data<<" ";

        head=head->next;
    }
  
  }

int main(){
    

    node * head=takeinput();

    cout<<"OEIGINAL NODE"<<endl;

    print(head);

    cout<<endl;

    cout<<"REVERSE NODE"<<endl;

    head=reverse_list(head);

    print(head);

   



}
