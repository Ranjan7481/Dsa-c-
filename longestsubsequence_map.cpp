#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> longest_subsequence(int *arr, int size){

	unordered_map<int, int>map;

	vector<int> largest_subsequence;

	for(int i=0; i<size; i++){

		int a=arr[i];
		if(map.count(a)==0){
			map[a]=0;
		}
	}

	for(int i=0; i<size; i++){

		if(map.count(arr[i] -1)==0){

			int currentelement = arr[i];
			vector<int>currentelementsubsequence;

			while(map.count(currentelement) >0){

				currentelementsubsequence.push_back(currentelement);
				currentelement++;
			}

			if(largest_subsequence.size() < currentelementsubsequence.size()){

				largest_subsequence=currentelementsubsequence;
			}
		}
	}

	return largest_subsequence;
}
int main(){

	int arr[]={6,3,5,1,4,10,7,9,11};


    vector<int>output=longest_subsequence(arr,9);

    for(int i=0; i<output.size(); i++){

    	cout<<output[i]<<" ";
    }

}
