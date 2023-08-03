#include <iostream>
using namespace std;

int main(){
	int a ;
	double s = 0;
	cout<<"Enter a num : ";
	cin>>a;
	for(double i = 1 ; i<=a ; i++)
	s = s + 1/i;
	cout<<"Sum = "<<s;
}
