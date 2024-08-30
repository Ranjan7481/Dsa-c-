#include<stdio.h>

 int main(){

  int count=0,sum=0,n,remainder;

  float avg;

  scanf("%d",&n);

  while(n>0){

    remainder=n%10;



    n=n/10;

    if(remainder%2==1){

    

    sum=sum+remainder;

    count++;

  }
  }

  avg=sum/count;


  
  printf("%f ",avg);
 
 

}
