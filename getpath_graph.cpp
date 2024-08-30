#include<iostream>
#include<queue>
using namespace std;

void print(int** edges, int n,int sv, bool* visited){


	cout<<sv<<endl;

	visited[sv]=true;

	for(int i=0; i<n;i++){

		if(i==sv){

			continue;
		}

		if(edges[sv][i]==1){

			if(visited[i]){

				continue;
			}

			print (edges,n,i,visited);
		}

		
	}
}

void printbfs(int ** edges, int n,int sv, bool *visited){

	queue<int>pendingvertices;

	

	pendingvertices.push(sv);

	visited[sv]=true;

	while(!pendingvertices.empty()){

		int currentvertex=pendingvertices.front();

		pendingvertices.pop();

		cout<<currentvertex<<endl;

	

	for(int i=0; i<n; i++){

		if(i == currentvertex){

			continue;
		}

		if(edges[currentvertex][i]==1 && !visited[i]){

			pendingvertices.push(i);

			visited[i]=true;
		}
	}
}

	
}

void BFS(int ** edges, int n){

	bool * visited =new bool[n];

	for(int i=0; i<n; i++){

		visited[i]=false;
	}

	for(int i=0; i<n; i++){

		if(!visited[i]){

			printbfs(edges, n , i, visited);

		}
	}

	delete [] visited;
}

void DFS(int ** edges,int n){

	bool * visited =new bool[n];

	for(int i=0; i<n; i++){

		visited[i]=false;
	}

	for(int i=0; i<n; i++){

		if(!visited[i])

			print(edges, n , i, visited);
	}

	delete [] visited;


}

vector<int>* getpathsDFShelper(int ** edges,int n,int sv,int ev, bool * visited){


	if(sv== ev){

		vector<int>* output= new vector<int>();

		output->push_back(ev);

		return output;
	}

	visited[sv]=true;

	for(int i=0; i<n; i++){

		if(edges[sv][i]==1 && !visited[i]){

			vector<int> * smalloutput=getpathsDFShelper(edges,n,i,ev,visited);

			smalloutput->push_back(sv);

			return smalloutput;
		}
	}

	return NULL;


}


vector<int>* getpathDFS(int ** edges,int n,int sv,int ev){

	bool *visited=new bool[n];

	for(int i=0; i<n; i++){

		visited[i]=false;
	}

	vector<int> * output =getpathsDFShelper(edges,n,sv,ev,visited);

	return output;
}





int main(){

	int n;

	int e;


	cin>>n>>e;

	int ** edges=new int *[n];


	for(int i=0; i<n; i++){

		edges[i]=new int[n];

		for(int j=0; j<n; j++){


			edges[i][j]=0;
		}
	}

	for(int i=0; i<e; i++){

		int f,s;

		cin>>f>>s;

		edges[f][s]=1;

		edges[s][f]=1;
	}

	
	/*cout<<"DFS"<<endl;

	DFS(edges,n);

	cout<<"BFS"<<endl;

	BFS(edges, n);*/

 vector<int> *output=getpathDFS(edges,n,1,4);

 for(int i=0; i<output->size(); i++){

 	cout<<output->at(i)<<endl;

	
}

	
for(int i=0; i<n; i++){

	delete [] edges[i];
}

delete [] edges;

}
