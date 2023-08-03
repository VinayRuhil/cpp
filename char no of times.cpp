#include <iostream>
using namespace std;

int main(){
	
	char a[1000] , c;
	int count=0;
	
	cout<<"Enter the string = ";
	cin>>a;
	
	cout<<"Enter character to be searched = ";
	cin>>c;
	
	for(int i = 0; a[i] ; i++){
		
		if(a[i]==c){
			count++;
		}
	}
	
	cout<<"Character "<<c<<" occured "<<count<<" times.";
	return 0;
	
	
}
