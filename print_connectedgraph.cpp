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
   
   void connectedhelper(int **edges,int n, int sv, bool * visited){

    
    cout<<sv<<" ";

    visited[sv]=true;

    for(int i=0; i<n; i++){

    	if(i == sv){

    		continue;
    	}

    	if(edges[sv][i]== 1){

    		if(!visited[i]){

    			connectedhelper(edges,n,i,visited);
    		}
    	}
    }

   }

   void connected_components(int ** edges,int n){

   	bool * visited=new bool[n];

   	for(int i=0; i<n; i++){

   		visited[i]=false;
   	}

   	for(int i=0; i<n; i++){

   		if(!visited[i]){

   			connectedhelper(edges,n,i,visited);

   			cout<<endl;
   		}
   	}
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

	
	
	connected_components(edges,n);

	
for(int i=0; i<n; i++){

	delete [] edges[i];
}

delete [] edges;

}
