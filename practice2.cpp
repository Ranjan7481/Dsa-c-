#include<bits/stdc++.h>
using namespace std ;

int findFunction(int *weight , bool *visited , int n){

    int minVertex = -1 ;

    for(int i = 0 ; i < n ; ++i){
        if(!visited[i] and (minVertex == -1 or weight[i] < weight[minVertex])){
            minVertex = i ;
        }
    }

    return minVertex ;
}

void printMST(int **edges , int n){

    int *weight = new int[n] ;
    bool *visited = new bool[n] ;
    int *parent = new int[n] ;

    for(int i = 0 ; i < n ; ++i){
        visited[i] = false ;
        weight[i] = INT_MAX;
    }

    weight[0] = 0 ;
    parent[0] = -1 ;

    for(int i = 0 ; i < n ; ++i){

        int minVertex = findFunction(weight , visited , n) ;
        cout<<minVertex<<endl;
        visited[minVertex] = true ;

        for(int j = 0 ; j < n ; ++j){
            if(edges[minVertex][j] != 0 and !visited[j]){
                if(edges[minVertex][j] < weight[j]){
                    weight[j] = edges[minVertex][j] ;
                    parent[j] = minVertex ;
                }
            }
        }
    }

    for(int i = 1 ; i < n ; ++i){
        if(parent[i] < i){
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }else{
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
        }
    }
}

int main(){

    int n , e ;
    cin>>n>>e;

    int **edges = new int*[n] ;

    for(int i = 0 ; i < n ; ++i){
        edges[i] = new int[n] ;
        for(int j = 0; j < n ; ++j){
            edges[i][j] = 0 ;
        }
    }

    for(int i = 0 ; i < e ; ++i){

        int s , d , w ;
        cin>>s>>d>>w;

        edges[s][d] = w ;
        edges[d][s] = w ;
    }

    printMST(edges , n ) ;

    for(int i = 0 ; i < n ; ++i){
        delete edges[i] ;
    }

    delete [] edges ;

    return 0 ;
}