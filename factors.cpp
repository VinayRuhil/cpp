#include <iostream>
using namespace std;

int main(){
	
	int p ;
	cout<<"Enter a number : ";
	cin>>p;
	
	cout<<"Factors : ";
	
	for(int i=1 ; i<p ; i++){
		
		if(p%i==0){
			cout<<i<<",";
		}
	}	
	return 0;	
}
