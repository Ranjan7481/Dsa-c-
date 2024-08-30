#include <bits/stdc++.h>
using namespace std;


int main(){

    int row=3;
    int col=4;

    int arr[row][col]={{2,3,4,5},{1,2,6,8},{4,9,3,2}};

    for(int i=0; i<3; i++){

        int start=0; 
        int end=col-1;

        while(start < end){

            swap(arr[i][start] , arr[i][end]);

            start++;
            end--;
        }
    }

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}