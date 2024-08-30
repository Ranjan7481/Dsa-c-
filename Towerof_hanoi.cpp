#include<iostream>
using namespace std;

void tower_of_hanoi(int start,int end,char source,char aux,char destination){

	if(start>end){

		return;
	}

	tower_of_hanoi(start,end-1,source,destination,aux);

	cout<<"move disk"<<end<<"from"<<source<<"to"<<destination<<endl;

	tower_of_hanoi(start,end-1,aux,source,destination);
}

int main(){

	tower_of_hanoi(1,2,'A','B','C');
}
