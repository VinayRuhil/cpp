#include <iostream>
using namespace std;

int fibonacii(){
	int t , count , n1, n2 ,n3;
	cout<<"Number of terms : ";
	cin>>t;
	
	n1 = 0;
	n2 = 1;
	count = 0;
	
	cout<<"Fibonacci sequence : ";
	
	while(count<t){
		cout<<n1<<",";
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		count++;
	}
}
	int main(){
		fibonacii();
		return 0;
	}
