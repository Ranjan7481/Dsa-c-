template<typename t>

class queueusingArray{

	t *data;

	int nextIndex;

	int firstIndex;

	int size;

	int capacity;

public:

	queueusingArray(int s){

		data =new t[s];

		nextIndex=0;

		firstIndex=-1;

		size=0;

		capacity=s;
	}

	int getSize(){

		return size;
	}

	bool isEmpty(){

		return size==0;
	}

	// INSERT ELEMENT

	void enqueue(t element ){

		if(size==capacity){

			t *newdata=new t[2*capacity];
			int j=0;

			for(int i=firstIndex; i<capacity; i++){

				newdata[j]=data[i];

				j++;
			}

			for(int i=0; i<firstIndex; i++){

				newdata[j]=data[i];

				j++;
			}

			
		}

		data[nextIndex]=element;

		nextIndex=(nextIndex + 1)% capacity;

		if(firstIndex == -1){

			firstIndex=0;
		}

		size++;
	}

	t front(){

		if(isEmpty()){

			cout<<" Queue is empty ! "<<endl;

			return 0;
		}

		return data[firstIndex];
	}

	t dequeue(){

		if(isEmpty()){

			cout<<" Queue is empty !"<<endl;

			return 0;
		}

		t ans =data [firstIndex];

		firstIndex=(firstIndex + 1) % capacity;

		size --;

		if (size == 0){

			firstIndex =-1;

			nextIndex  = 0;
		}

		return ans;
	}


};