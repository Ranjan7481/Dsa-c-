#include<iostream>
using namespace std;
#include<queue>
#include"TREENODE.H"

#include<string>

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

treenode <int>* largest_node(treenode<int> *root){
    if(root==NULL){

        return NULL;
    }

    treenode<int>* largestnode=root;

    for(auto child: root->children){

        treenode<int> * maxcurrentnode=largest_node(child);

        if(maxcurrentnode->data > largestnode->data){

            largestnode=maxcurrentnode;


        }


    }

    return largestnode;


}


int main(){

    treenode<int>*root=takeinputlevelwise();


	printtreelevelwise(root);

    cout<<"largestdata"<<endl;

     cout<<largest_node(root)->data;
    
}

