#include <iostream>
using namespace std;

int main(){
	
	int *arr;
	int size;
	
	cout<<"Enter size of array : ";
		cin>>size;
		arr = new int[size];
		
	cout<<"Enter elements of array : "<<endl;
		for(int i=0 ; i<size ; i++)
		cin>>arr[i];

		for(int i=0 ; i<size ; i++)
		{
			for( int j=i+1 ; j<size  ; j++)
			{
				if(arr[i]==arr[j])      
				{
					for(int k=j ; k<size ; k++)
						arr[k]=arr[k+1];
						size--;
					j--;
				}
			}
		}
		
	cout<<"Array elements after deletion of the duplicate elements: ";    
	cout<<"{";
    for (int i = 0; i < size; i++)  
    {  
        cout<<arr[i]<<",";  
    }  
    cout<<"}";
		
}
