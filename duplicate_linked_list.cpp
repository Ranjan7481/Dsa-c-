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



// node *duplicat(node*head){

//     node *current=head;

//     while(current !=NULL && current->next !=NULL){

//         if(current->data==current->next->data){

//             current->next=current->next->next;
//         }
//         else{

//             current=current->next;

//         }
//     }

//     return head;
// }





//node *reverse_list(node *head){

    // node *new_head=NULL;

    // while(head != NULL){

    //     node *temp=head;

    //     head=head->next;

    //     temp->next=new_head;

    //     new_head=temp;


//     }

//     return new_head;
// /}



node *deletenode(node *head){

    node *current=head;
    node *prev =NULL;

    while(current !=NULL && current->next !=NULL){

        prev=current;
        current= current->next;

        if(current->next=NULL){

            prev->next=NULL;
        }
    }

    return  head;
}


void print (node *head ){

    while(head !=NULL){

       cout<<head->data<<" ";

        head=head->next;
    }
  
  }

int main(){
    

    node * head=takeinput();

    print(head);

    cout<<endl;


    //head=duplicat(head);

   // print(head);

   // cout <<endl;

   // head=reverse_list(head);

    //print(head);

     head=deletenode(head);

     print(head);

   



}
