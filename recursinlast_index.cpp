#include<iostream>
using namespace std;

int last_index(int arr[],int size,int x){

     //base case 

    if(size == 0){

        return -1;
    }

   int ans= last_index(arr+1,size-1,x);
 

   if(ans !=-1)
   {
    
    return ans+1;
   }


   if(arr[0]==x)
   {

    return 0;
   }

    else{

        return -1;
   }

 
  }

int main(){

    int size;

    cin>>size;

    int x;

    cin>>x;

    int arr[size]={5,6,10,8,9,10,11,6};

    int result=last_index(arr,size,x);

    cout<<result;
}
