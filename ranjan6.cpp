#include<iostream>
using namespace std;

int main(){


    int arr[5]={10,20,30,40,50};

    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){


            for(int k=i;k<=j;k++){



                cout<<arr[k]<<" ";
            }

            cout<<endl;
        }
    }
}
