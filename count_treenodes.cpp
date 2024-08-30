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

int treenodes(treenode<int>*root){

    int ans=1;

    for(int i=0; i<root->children.size();i++){

        ans+=treenodes(root->children[i]);
    }

    return ans;


}





int main(){

	
	treenode<int>*root=takeinputlevelwise();


	printtreelevelwise(root);

    int ans=treenodes(root);

    cout<<ans;
}
