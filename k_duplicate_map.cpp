#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;


bool k_duplicates(int *arr , int size , int k){

	unordered_map<int ,int>map;
	for(int i=0; i<size; i++){

	if(map.count(arr[i]) > 0 && i - map[arr[i]] <= k){

		return true;
	}
	else{
	 map[arr[i]]=i;
	}

}

return false;
}





int main(){

	int arr[]={2,1,7,3,7,2,9};
	cout<<k_duplicates(arr,7,5);
}
