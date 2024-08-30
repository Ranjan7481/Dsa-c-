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


vector<int>*getrootnodetopath(binarytreenode<int>*root,int data){

    if(root == NULL){

        return NULL;
    }

    if(root->data== data){

        vector<int>*output=new vector<int>();

        output->push_back(root->data);

        return output;
    }

    vector<int>*leftoutput=getrootnodetopath(root->left,data);

    if(leftoutput!=NULL){

        leftoutput->push_back(root->data);

        return leftoutput;
    }

    vector<int>*rightoutputt=getrootnodetopath(root->right,data);
    if(rightoutputt!=NULL){

        rightoutputt->push_back(root->data);

        return rightoutputt;
    }else{

        return NULL;
    }
}




int main(){

    binarytreenode<int>*root=takeinputlevelwise();

   vector<int>*output=getrootnodetopath(root,8);

   for(int i=0; i< output->size(); i++){

    cout<<output->at(i)<<endl;


   }

 



}
