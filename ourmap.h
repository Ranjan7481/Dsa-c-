
#include<string>
using namespace std;

template <typename v>
class mapnode{

public:

	string key;
	v value;
	mapnode* next;

	mapnode(string key, v value){

		this->key=key;
		this->value = value;
		next = NULL;
	}

	~mapnode(){
		delete next;
	}
};


template <typename v>

class ourmap{
	mapnode<v>** buckets;
	int count;
	int numbuckets;

public:

	ourmap(){
		count=0;
		numbuckets=5;
		buckets = new mapnode<v>[numbuckets];

		for(int i=0; i<numbuckets; i++){

			buckets[i]=NULL;
		}
	}


	~ourmap(){

		for(int i=0; i< numbuckets; i++){

			delete buckets[i];
		}

		delete [] buckets;
	}


	int size(){

		return count;
	}


	v getvalue(string key){
	 int bucketindex = getbucketindex( key);
	 mapnode<v>* head = buckets[bucketindex];

	 while(head != NULL){
	 	if(head-> key==key){
	 		return head->value;
	 	}

	 	head = head->next;
	 }
return 0;

	}

private:

	int getbucketindex(string key){

		int hashcode =0;

		int currentcoeff=1;

		for(int i=key.length() -1; i >=0; i--){

			hashcode+=key[i] *currentcoeff;
			hashcode = hashcode % numbuckets;

			currentcoeff *=37;

			currentcoeff = currentcoeff % numbuckets;

		}

		return hashcode % numbuckets;
	}


	void insert(string key , v value){


		int bucketindex = getbucketindex( key);

		mapnode<v> * head = buckets[bucketindex];
		while(head != NULL){

			if(head->key == key){

				head->value = value;

				return;
			}

			head = head->next;
		}

		head = buckets[bucketindex];
		mapnode<v>* node = new mapnode<v>(key , value);
		node->next = head;
		buckets[bucketindex]= node;
		count++;



	}

	v remove(string key){

	  int bucketindex = getbucketindex( key);
      mapnode<v>* head = buckets[bucketindex];
      mapnode<v>* prev = NULL;

      while(head != NULL){

      	if(head->key == key){
      		if(prev == NULL){
      			buckets[bucketindex] = head->next;
      		}else{
      			prev->next = head->next;
      		}

      		v value = head->value;
      		head->next = NULL;
      		delete head;
      		count--;
      		return value;
      	}

      	prev= head;
      	head = head->next;
      }

      return 0;
};

