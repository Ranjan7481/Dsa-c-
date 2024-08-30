#include<stdio.h>

int main(){
 
 int arr[10]={1,2,3,4,5,6,7,8,9,10};

 printf("array elements are \n");

 for(int i=0; i<10; i++){

    printf(" %d \t",arr[i]);


 }

 for(int i=0; i<10; i++){

    int temp=arr[i];

    arr[i]=arr[9-i];

    arr[9-i]=temp;
 }

 printf("array in reverse order \n");

 for(int i=0; i<=9; i++){

 printf("%d \t", arr[i]);}

 return 0;


}