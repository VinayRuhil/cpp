#include <iostream>
using namespace std;
int main()
{
  int i,j;
    char CH='E';
    int space=1;
 
    for(i=1; i<=5; i++)
    {
        for(j='A'; j<=CH; j++)
            cout<<((char)(j));
 
        if(i==1)
           cout<<"\b";
 
        for(j=1; j<space; j++)
            cout<<" ";
 
 
        for(j=CH; j>='A'; j--)
            cout<<((char)(j));
 
        cout<<endl;
        CH--;
        space++;
    }
  return 0;
}
