#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]){

 if(size==0)
      return 0;
    int ans=allIndexes(input, size-1, x , output );
    if(input[size-1]==x)
    {
        output[ans]=size-1;
       return ans+1; 
    }
    return ans;
}  

int main(){

    int size;

    cin>>size;

    int x;

    cin>>x;

    int arr[100]={4,5,6,4,8,6};

    int count=0;

    int output[10];

    int result=allIndexes(arr,size,x,output);

    cout<<result;
}
