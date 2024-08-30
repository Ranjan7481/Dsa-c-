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

		if(!visited[i])

			printbfs(edges, n , i, visited);
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

bool hashpath_dfs(int **edges,int n,int v1,int v2,bool *visited){

	visited[v1]=true;

	if(edges[v1][v2]==1){

		return true;
	}

	for(int i=0; i<n; i++){

		if(i==v1){

			continue;
		}

		if(edges[v1][i]==1){

			if(visited[i]){

				continue;
			}

			if(hashpath_dfs(edges,n,i,v2,visited)){

				return true;
			}
		}
	}

	return false;
}

  bool haspath(int ** edges,int n, int v1,int v2){

  	bool *visited=new bool [n];


  	return hashpath_dfs(edges,n,v1,v2,visited);
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

	
	cout<<"DFS"<<endl;

	 DFS(edges,n);

	cout<<"BFS"<<endl;

	//BFS(edges, n);

 cout<< haspath(edges,n,1,6)<<endl;



	
for(int i=0; i<n; i++){

	delete [] edges[i];
}

delete [] edges;

}
