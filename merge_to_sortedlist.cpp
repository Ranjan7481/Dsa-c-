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

 node *merge_to_sorted(node*head1, node*head2){

    node*head=new node(0);

    node * curr=head;

    while(head1 !=NULL && head2!= NULL){

        if(head1->data <=  head2->data){

            curr->next=head1;
            head1=head1->next;
        }else{

            curr->next=head2;

            head2=head2->next;
        }

        curr=curr->next;
    }

    if(head1 !=NULL)curr->next=head1;
    if(head2 !=NULL)curr->next=head2;

    return head->next;
}





void print (node *head ){

    while(head !=NULL){

       cout<<head->data<<" ";

        head=head->next;
    }
  
  }

int main(){
    

    node * head1=takeinput();

    node * head2=takeinput();

   // print(head1);

    cout<<endl;

   // print(head2);


    node*head=merge_to_sorted(head1,head2);

    print(head);

    
   



}
