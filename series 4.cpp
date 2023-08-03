#include <iostream>
#include<math.h>
using namespace std;

double series(int a)
{
	double s = 0 , c = 0  , d = 0;
	for(int i = 1 ; i<=a ; i++){
	
		if(i%2==0){
			c = c + 1 / pow(i , i);
		}
		else{
			d = d + 1 / pow(i , i);
		}
		s = d - c ;
	}
	return s;
}


int main(){
	int a;
	cout<<"Enter a num : ";
	cin>>a;
	cout<<"Sum of series = "<<series(a);
	return 0;
	
	
}
