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

 node * reverse(node *head){

    if(head== NULL || head->next == NULL){

        return head;
    }

    node * smallans=reverse(head->next);

    node * temp=smallans;

    while(temp->next !=NULL){

        temp=temp->next;
    }

    temp->next=head;

    head->next=NULL;

    return smallans;
 }

void print (node *head ){

    while(head !=NULL){

       cout<<head->data<<" ";

        head=head->next;
    }
  
  }

int main(){
    

    node * head=takeinput();

    head=reverse(head);

    print(head);

   
    
   



}
