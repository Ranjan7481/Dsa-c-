#include<iostream>
#include<string>
using namespace std;



int maxm(int arr[] , int n,int idx,int max){

if(idx >n){
   
   return -1;
}

if(max<arr[idx]){
 
    max=arr[idx];

}
maxm(arr,n,idx+1,max);

return max;

}



int main(){


   int n=5;
   int arr[5]={5,2,5,1,6};


 cout<<maxm(arr,n,0,0);


}