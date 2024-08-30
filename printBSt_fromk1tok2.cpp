#include<iostream>

#include"binarytreeclass.h"

#include<queue>

#include<climits>

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

    cout<<"enter root data";
    
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
bool isBst(binarytreenode<int>*root,int min,int max){

    if(root == NULL){

        return true;
    }

    if(root->data>max || root->data <min){

        return false;
    }

    bool islesftbst=isBst(root->left,min,root->data);
    bool isrightbst=isBst(root->right,root->data+1,max);

    return islesftbst && isrightbst;
}

void printfromk1tok2(binarytreenode<int>*root,int k1,int k2){

    if(root == NULL)

    return;

    if(root->data >k1 && root->data <k2){

        cout<<root->data<<endl;
    }

    if(root->data >k1){

        printfromk1tok2(root->left,k1,k2);


    }

    if(root->data <k2){

        printfromk1tok2(root->right,k1,k2);
    }
}

int main(){

    binarytreenode<int>*root=takeinputlevelwise();

    printtree(root);

   cout<< isBst(root,INT_MIN,INT_MAX)<<endl;

   printfromk1tok2(root,15,45);




}
