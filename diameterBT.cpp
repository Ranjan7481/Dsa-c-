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

pair<int,int>heightdiameter(binarytreenode<int>*root){

    if(root == NULL){

        pair<int,int>p;
        p.first=0;
        p.second=0;

        return p;

    }

    pair<int,int> leftans=heightdiameter(root->left);

    pair<int,int>rightans=heightdiameter(root->right);

    int ld=leftans.second;
    int lh=leftans.first;

    int rd=rightans.second;
    int rh=rightans.first;

    int height =1+max(lh,rh);

    int diameter=max(lh +rh,max(ld,rd));

    pair<int,int>p;
    p.first=height;
    p.second=diameter;

    return p;
}



int main(){

    binarytreenode<int>*root=takeinputlevelwise();

    printtree(root);

  pair<int,int>p=heightdiameter(root);

  cout<<"height"<<p.first<<endl;
  cout<<"diameter"<<p.second<<endl;
   


delete root;
}

