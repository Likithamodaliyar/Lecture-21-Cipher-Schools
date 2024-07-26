#include<iostream>
using namespace std;
int main (){
	int a=4;
	cout<<"address of a is "<<&a;
	return 0;	
}

// Declare the pointers concepts.
//pointers is a varaible that stores the memory address as its value.and it is cresated by using with the asterisk sign(*).
#include<iostream>
using namespace std;
int main(){
	string name="Mumbai";
	string*ptr=&name;
	cout<<ptr<<endl<<&name;
	return 0;
}
