#include<iostream>

#include"binarytreeclass.h"

#include<queue>

using namespace std;

void printtree(binarytreenode<int> *root){

    if(root== NULL){
        return;
    }
    cout<<root->data<< " :";

    if(root->left != NULL){

        cout<<"L"<<root->left->data;
    }

    if(root->right !=NULL){

        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printtree(root->left);
    printtree(root->right);
}

binarytreenode <int>* takeinput(){

    int rootdata;
    cout<<"enter data";
    cin>>rootdata;

    if(rootdata == -1){

        return NULL;
    }

    binarytreenode<int>*root=new binarytreenode<int>(rootdata);
     binarytreenode<int>* leftchild= takeinput();
      binarytreenode<int>* rightchild= takeinput();

      root->left=leftchild;

      root->right=rightchild;

      return root;

}

binarytreenode<int> * takeinputlevelwise(){

    int rootdata;

    cout<<"enter root data"<<endl;
    
    cin>>rootdata;

    if(rootdata== -1){

        return NULL;
    }

    binarytreenode<int> *root= new binarytreenode<int>(rootdata);

    queue <binarytreenode<int>*> pendingnodes;

    pendingnodes.push(root);

    while(pendingnodes.size() !=0){

        binarytreenode<int>*front= pendingnodes.front();
         
         pendingnodes.pop();

         cout<<"enter leftchild of"<<front->data<<endl;

         int leftchild;

         cin>>leftchild;

         if(leftchild != -1){
            binarytreenode<int>*child= new binarytreenode<int>(leftchild);

            front->left=child;
            pendingnodes.push(child);
         }
            cout<<"enter rightchild of"<<front->data<<endl;

         int rightchild;

         cin>>rightchild;

         if(rightchild != -1){
            binarytreenode<int>*child= new binarytreenode<int>(rightchild);

            front->right=child;
            pendingnodes.push(child);
         }
    }

    return root;
}

bool mirror(binarytreenode<int>*root1,binarytreenode<int>*root2){

    if(root1== NULL || root2== NULL)

     return 0;

     
     if(root1->data==root2->data){

        return true;
     }

     return  (root1->left->data== root2->right->data) || (root1->right->data== root2->left->data);
}

int main(){

    binarytreenode<int>*root=takeinputlevelwise();

    printtree(root);

    printtree(root);

    int ans=mirror(root,root);

   cout<<ans;



}

