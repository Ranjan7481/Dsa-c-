#include<iostream>
#include<queue>
#include<string>
using namespace std;

#include"TREENODE.H"

treenode<int>*takeinputlevelwise(){

	int rootdata;

	cout<<"enter root data"<<endl;

	cin>>rootdata;

	treenode<int>*root=new treenode<int>(rootdata);

	queue<treenode<int>*>pendingnodes;

	pendingnodes.push(root);
	while(pendingnodes.size() !=0){

		treenode<int>*front=pendingnodes.front();

		pendingnodes.pop();

		cout<<"enter num of children of"<<front->data<<endl;

		int numchild;

		cin>>numchild;
     for(int i=0; i<numchild; i++){

		int childData;
		cout<<" Enter"<< i<<"th child of"<<front->data<<endl;

		cin>>childData;
		treenode<int>*child=new treenode<int>(childData);
		front->children.push_back(child);
		pendingnodes.push(child);
	 }

	}

	return root;

}

treenode<int>*takeinput(){

	int rootdata;

	cout<<"enter data"<<endl;

	cin>>rootdata;

	treenode<int>*root= new treenode<int>(rootdata);

	int n;

	cout<<"enter num of children of"<<rootdata<<endl;

    cin>>n;
    
	for(int i=0; i<n; i++){

		treenode<int>*child=takeinput();

		root->children.push_back(child);
	}

	return root;


}

void printtreelevelwise(treenode<int>*root){

	queue<treenode<int>*>pendingnodes;
	pendingnodes.push(root);

	while(pendingnodes.size() !=0){

		treenode<int>*currentnode=pendingnodes.front();
		pendingnodes.pop();

		string tobeprinted=to_string(currentnode->data)+":";

		for(int i=0; i<currentnode->children.size(); i++){

			tobeprinted+=to_string(currentnode->children[i]->data)+",";

			pendingnodes.push(currentnode->children.at(i));


		}

		if(tobeprinted[tobeprinted.length()-1]==','){

			tobeprinted=tobeprinted.substr(0,tobeprinted.length()-1);

		}

		cout<<tobeprinted<<endl;
   
}
}

void printtree(treenode<int>*root){

	if(root==NULL){

		return;
	}

	cout<<root->data<<":";

	for(int i=0; i<root->children.size(); i++){

		cout<<root->children[i]->data<<",";
	}

	cout<<endl;

	for(int i=0; i<root->children.size(); i++){


		printtree(root->children[i]);
	}
}




int main(){

	/*treenode<int>* root=new treenode<int>(1);

	treenode<int>*node1=new treenode<int>(2);

	treenode<int>*node2=new treenode<int>(3);


	root->children.push_back(node1);

	root->children.push_back(node2); */

	treenode<int>*root=takeinputlevelwise();

	printtreelevelwise(root);
}
