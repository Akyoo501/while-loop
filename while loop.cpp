#include <Iostream>
using namespace std;

int main(){
	int balance = 1000;
	int number;
	
	while(balance >= 100){
		cout<<"Enter your mount: ";
		cin>>number;
		balance = balance - number;
	}
	
	return 0;
}
