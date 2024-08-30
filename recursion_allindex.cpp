#include<iostream>

using namespace std;


void all_indexhelper(int *inputarr,int start,int end,int x){


    if(start==end){

        return ;
    }

    if(inputarr[start]==x){

        cout<<start<<" ";
    }
    all_indexhelper(inputarr,start+1,end,x);

}


void all_index(int *inputarr, int n, int x){

    all_indexhelper(inputarr, 0, n,x);
}

int main(){

    int n;

    cin>>n;

    int x;

    cin>>x;

    int arr[n];

    for(int i=0; i<n;i++){


        cin>>arr[i];
    }

    all_index(arr,n,x);

    return 0;
}
