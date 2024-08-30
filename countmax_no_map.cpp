#include<iostream>
#include<unordered_map> 
using namespace std;

int count(int *a , int size){

	int maxcount;
	int  element_having_max_freq;

	//unordered_map<int,bool> check;

	for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j])
                count++;
        }


  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = a[i];
        }


	}

	return  element_having_max_freq;
}

int main(){


	int a[]= {1,2,1,3,4,3,2,1};

	int result=count(a, 8);

	cout<<result;

}