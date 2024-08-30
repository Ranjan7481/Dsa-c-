#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> interesection_array(int *arr1, int *arr2, int size1, int size2){

	vector<int> output;

	unordered_map<int , bool> seen;

	for(int i=0; i< size1; i++){

		for(int j=0; j<size2; j++){

			if(seen.count(arr1[i])==seen.count(arr2[j]))

				continue;
				//output.push_back(arr1[i]);

		}

		seen[arr1[i]]=true;

		
		output.push_back(arr1[i]);
	}
	return output;


}

int main(){


	int arr1[]={1,2 ,2 ,3,5};
	int arr2[]={1,4,2,3,5};

	vector<int >output=interesection_array(arr1,arr2,5,5);

	for(int i=0; i<output.size(); i++){

		cout<<output[i]<<endl;
	}
}
