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



    
     /*else{

      node * temp=head;

      while(temp->next !=NULL){
          
          temp=temp->next;
           
            }

        temp->next=newnode;
        }*/

     // second method

    else{

        tail ->next=newnode;

        tail=tail->next;

        //OR

       // tail=newnode;


    }

        cin >>data;
    }


    return head;
}



void print (node *head ){

    while(head !=NULL){

       cout<<head->data<<" ";

        head=head->next;
    }
  
  }

int main(){
    

    node * head=takeinput();

    node * head2 =removeKthNode(head,2);

    print(head2);



   



}
