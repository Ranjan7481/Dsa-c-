#include<iostream>
#include<string>
using namespace std;


class Customer{
	string name;
	int accountno,balance;
	static int totalcustomer;
	static int totalbalance;


public:
	Customer(string a,int b,int c){
		name=a;
		accountno=b;
		balance=c;
		totalcustomer++;
		totalbalance+=balance;

	}
	
	

	 void deposit(int amount){
		if(amount>0)
			balance+=amount;
		totalbalance+=amount;

	}

	void withdraw(int amount){
		if(amount>=balance && amount<0);
		balance-=amount;
		totalbalance-=amount;
	}




	void display(){
		cout<<name<<" "<<accountno<<" "<<balance<<endl;
		cout<<"totalbalance"<<" "<<totalbalance<<" "<<"totalcustomer"<<" "<<totalcustomer;
	}
};
int Customer:: totalcustomer=0;
int Customer:: totalbalance=0;


int main(){
	Customer A1("rudra",190,120);
	Customer A2("ranjan",169,146);
	
	
	A1.deposit(700);
	A1.withdraw(500);
	A2.display();
}



