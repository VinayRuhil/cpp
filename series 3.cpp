#include <iostream>
using namespace std;

double sum(int a)
{
	double s = 0;
	int fact = 1;
    for (int i = 1; i <= a; i++){
    	fact = fact*i;
    	s = s + 1.0/fact;
	}
    return s;
}
int main(){
	int a;
	cout<<"Enter a num : ";
	cin>>a;
	cout<<"Sum = "<<sum(a);
	return 0;
	
}
