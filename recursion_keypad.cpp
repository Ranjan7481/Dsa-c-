#include<iostream>
using namespace std;

string get_possiblechars_for_keypad(char c){


	if(c=='2')

	return "abc";
	

	if(c=='3')

	return "def";

   
    if(c=='4')

   	return "ghi";

    if(c=='5')

   	return "jkl";

    if(c=='6')

   	return "mno";

    if(c=='7')

   	return "pqrs";

    if(c=='8')

   	return "tuv";

    if(c=='9')

   	return"wxyz";

    return " ";
}

int get_keypadcombination(string str, string output[]){

	if(str.length()==0){

		output[0]= "";

		return 1;
	}

	int smalleroutputsize=get_keypadcombination(str.substr(1),output);

	string firstdigitpossiblechars= get_possiblechars_for_keypad(str[0]);

	string temp [1000];

	int k=0;

	for(int i=0; i<smalleroutputsize;i++){

		for(int j=0;j<firstdigitpossiblechars.length(); j++){


			temp[k]=firstdigitpossiblechars[j]+output[i];
			k++;
		}
	}

	for(int i=0;i<k;i++){

		output[i]=temp[i];
	}

	return smalleroutputsize*firstdigitpossiblechars.length();
}

int main(){


	string output[10000];

	int outputsize=get_keypadcombination("23",output);

	for(int i=0; i<outputsize;i++){

		cout<<output[i]<<endl;
	}

	return 0;
}
