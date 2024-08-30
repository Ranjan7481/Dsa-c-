
#include <iostream>
using namespace std;




int main(){

    int n=4;

    int arr[n][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


     for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            swap(arr[i][j],arr[j][n-1-i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        for(int j=0; j<n; j++){

            cout<<arr[i][j];
        }
        cout<<endl;
    }
    

    

    return 0;
}