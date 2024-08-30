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

 node *mergeSortedLists(node *head1, node *head2){
   node *result = NULL;
   if (head1 == NULL) {
      return head2;
   }
   if (head2 == NULL) {
      return head1;
   }
   if (head1->data < head2->data) {
      result = head1;
      result->next = mergeSortedLists(head1->next, head2);
   } else {
      result = head2;
      result->next = mergeSortedLists(head1, head2->next);
   }
   return result;

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


    node*head=mergeSortedLists(head1,head2);

    print(head);

    
   



}
