#include<iostream>
using namespace std;


pair<int,int>stairsearchaaaa(int arr[][3],int n,int m,int key){


   // if(key<arr[0][0] or key>arr[n-1][m-1]){

     //   return {-1,-1};}


        int i=0;

        int j=m-1;



        while(i<=n-1 and j>=0){


            if(arr[i][j]==key){

            return{i,j};}
        
        else if(arr[i][j]>key){

            j--;
        }else{

            i++;
        }
            }

            return{-1,-1};
    }


int main(){

    int arr[][3]={{1,2,3},

                   {4,5,6},
                   {7,8,9}};

        
int n=3,m=3;

int key;

cin>>key;

pair<int,int>cords=stairsearchaaaa(arr,n,m,key);


cout<<cords.first<<" "<<cords.second<<endl;
                                   


}
