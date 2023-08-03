#include <iostream>
using namespace std;

int main(){
	int n , a = 0, b = 0 , s = 0;
	cout<<"Enter num : ";
	cin>>n;
	for(int i; i<=n ; i++){
		if(i%2==0){
			a = a + i;
		}
		else{
			b = b + i;
		}	
	}
	s = b - a;
	cout<<"Sum upto n series = "<<s;
	return 0;
	
}
