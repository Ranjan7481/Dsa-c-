#include<iostream>
using namespace std;

bool helpereven(int n){

    if(n%2==0){
        return true ;
    }
    return false ;
}
bool helperodd(int n){
    if(n%2 != 0){
        return true  ;
    }
    return false ;

}

int main(){

    pair<char , int>input ;
    cin>>input.first>>input.second ;

    if(input.first == 'e'){

        bool iseven = helpereven(input.second);
        if(iseven == true){
            cout<<"yes" ;
        }else{
            cout<<"no" ;
        }

    }else {

        bool isodd = helperodd(input.second) ;
        if(isodd){
            cout<<"yes" ;
        }else{
            cout<<"no" ;
        }
    }
}
