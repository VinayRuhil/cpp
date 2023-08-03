#include <iostream>  
using namespace std;  

void isprime()
{
	int a, i , c=0; 
 	cout << "Enter the Number to check Prime: ";  
  	cin >> a; 
	
	for(i = 1 ; i <= a; i++) 
  {  
      if(a % i == 0)  
      {  
         c++; 
      }  
  }  
  if (c==2){
  	cout << "Number is Prime."<<endl;
  }  
    else{
    	cout << "Number is not Prime."<<endl;
	}
	
	cout<<endl;
	
	int k=0, j;
    cout<<"Prime Numbers Between 1 to 100 are:\n";
    for(i=1; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               k++;
               break;
           }
        }
        if(k==0 && i!=1)
            cout<<i<<endl;
        k = 0;
	
	 
}
}

int main() 
{  
  isprime();
  return 0;  
}  
