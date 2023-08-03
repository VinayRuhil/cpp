#include <iostream>
using namespace std;

void star(int n)
{

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
 
            cout << "* ";
        }
        cout << endl;
    }
}
 
int main()
{
    int n;
    cout<<"Enter number of rows = ";
    cin>>n;
    star(n);
    return 0;
}
