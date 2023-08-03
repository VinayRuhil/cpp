#include<iostream>
using namespace std;
int main()
{
int x, y, i, j;
cout << "Enter number of rows: ";
cin >> x;
for(i = 1; i <= x; i++)
{
for(y = x; y > i; y--)
cout << " ";
for(j=0; j<i; j++)
cout << "* ";
cout << "\n";
}
for(i = 1; i < x; i++)
{
for(y = 0; y < i; y++)
cout << " ";
for(j = x; j > i; j--)
cout << "* ";
cout << "\n";
}
return 0;
}
