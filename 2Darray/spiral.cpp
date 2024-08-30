
#include <bits/stdc++.h>
using namespace std;




int main(){

    int row=4;
    int col=4;

    int arr[row][col]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


     for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){

            swap(arr[i][j],arr[j][i-1]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        /* code */
        for(int j=0; j<col; j++){

            cout<<arr[i][j];
        }
        cout<<endl;
    }
    

    

    return 0;
}