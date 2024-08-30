#include<iostream>
using namespace std;


int count_ways(int n){


    if(n==1)

        return 1;

    else if (n==2){

        return 2;

    }
    else if(n==3){

        return 4;
    }

    return count_ways(n-1) + count_ways (n-2)+ count_ways (n-3);
}
int main(){

cout<<count_ways(10)<<endl;


}
