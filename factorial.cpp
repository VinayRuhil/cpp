#include <iostream>
using namespace std;

int main(){
	int a , fact = 1;
	cout<<"Enter a num : ";
	cin>>a;
	if(a<2){
		fact = 1;
	}
	for(int i = 1; i<=a ; i++)
		fact = fact*i;
	cout<<"Factorial of "<<a<<" is "<<fact;	
	return 0;
}
