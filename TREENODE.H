#include<vector>
using namespace std;

template<typename t>

class treenode{

public:

	int data;

	vector<treenode<t>*>children;

	treenode(t data){

		this ->data=data;
	}


};
