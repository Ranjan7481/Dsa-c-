#include<iostream>

using namespace std;


int subs(string input,string output[]){


	if(input.empty()){


		output[0]=" ";

		return 1;
	}

	string smallstring=input.substr(1);

	int smallstringsize=subs(smallstring,output);

	for(int i=0;i<smallstringsize;i++){

		output[i+smallstringsize]= input[0]+output[i];


	}

	return 2*smallstringsize;
}

int main(){

	string input;

	cin>>input;

	string* output =new string [1000];

	int count=subs(input,output);

	for( int i=0; i<count; i++){


		cout<<output[i]<<endl;
	}

  return 0;

}
