#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>&arr , int m){

    int n = arr.size() ;

    int startIndex = (n-m)+1 ;

    int j = n-1 ;

    for(int i = m+1 ; i < n ,j > i ; ++i , --j){
        swap(arr[i], arr[j]) ;
    }

    for(int i : arr){
        cout<<i << " ";
    }
}

int main(){

    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int m ;
        cin>>m;

        vector<int>arr(n) ;

        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i] ;

        reverseArray(arr , m) ;
        cout<<endl;
    }

    
}
