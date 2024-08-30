#include<climits>

template<typename t>

class stackusingArray{

	t * data;

	int nextIndex;

	int capacity;


public:

	stackusingArray(){

		data=new t [4];

		nextIndex=0;

		capacity=4;
	}

	int size(){

		return nextIndex;
	}


	bool isEmpty(){


		return nextIndex==0;
	}

	//  insert element

	void push (t element){

		if(nextIndex==capacity){

			t *newdata= new t [2 * capacity];

			for(int i=0; i< capacity; i++){

				newdata[i]=data[i];
			}

			capacity *=2;

			delete[] data;

			data =newdata;
		}

		data[nextIndex]=element;

		nextIndex++;
	}

	// delete element

	t pop(){

		if(isEmpty()){

			cout<<"stack is empty"<<endl;

			return 0;
		}

		nextIndex--;

		return data[nextIndex];
     }

     t top(){

     	if(isEmpty()){

			cout<<"stack is empty"<<endl;

			return 0;
		}


     	return data[nextIndex-1];
     }
};