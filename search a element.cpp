#include <iostream>
using namespace std;

int main(){
	
	int *arr;
	int size;
	int element , flag=0;
	
	cout<<"Enter size of array : ";
		cin>>size;
		arr = new int[size];
		
	cout<<"Enter elements of array : "<<endl;
		for(int i=0 ; i<size ; i++)
		cin>>arr[i];
	
		
		cout<<"Enter element to be searched : ";
		cin>>element;
		
		for(int i=0 ; i<size ; i++)
		{
			if(arr[i]==element)
			{
				cout<<"Element is present in the set"<<endl<<endl;
				flag=1;
				break;
			}
		}
		
		if(flag==0){
			cout<<"Element is not present in the set"<<endl<<endl;
		}
	
	return 0;
}
