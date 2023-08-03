#include<iostream>
#include<conio.h>
using namespace std;


void menu()
{
	cout<<"WELCOME!!!"<<endl<<endl;
	cout<<"1 -> Cardinality"<<endl;
	cout<<"2 -> Check Number"<<endl;
	cout<<"3 -> Union"<<endl;
	cout<<"4 -> Intersection"<<endl;
	cout<<"5 -> Subset"<<endl;
	cout<<"6 -> Set-difference"<<endl<<endl;
}


class SET{
	int *arr;
	int size;
	
public:
	void Setsize()
	{
		cout<<"Enter size of array : ";
		cin>>size;
		arr = new int[size];
		
	}	
	void input()
	{
		cout<<"Enter elements of array : "<<endl;
		for(int i=0 ; i<size ; i++)
		cin>>arr[i];
		unique();
	}
	
	void cardinality()
	{
		cout<<size<<endl; 
		
		
	}
	
	void output()
	{
		cout<<"Entered set is : ";
		cout<<"{";
		for(int i=0 ; i<size ; i++)
		{
			cout<<arr[i]<<",";
		}
		cout<<"}"<<endl<<endl; 
	}
	
	
	
		void output1()
	{
		cout<<"{";
		for(int i=0 ; i<size ; i++)
		{
			cout<<arr[i]<<",";
		}
		cout<<"}"<<endl; 
	}
	
	
	void unique()
	{
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
	}
	void ismember()
	{
		int element , flag=0;
		cout<<"Enter element to be checked : ";
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
			cout<<"Element is not Present in the set"<<endl<<endl;
		}
	}
	
	SET intersection(SET a)
	{
		SET c;
		c.size = size - a.size;
		c.arr = new int[c.size];
		for (int i=0; i<size ; i++)
		c.arr[i]=arr[i];
		for (int i=0 ; i<a.size ; i++)
		c.arr[i - size] = a.arr[i]; 
		unique();
		return c;
	}
		
	
	SET Setunion (SET a)
	{
		SET c;
		c.size = size + a.size;
		c.arr = new int[c.size];
		for (int i=0; i<size ; i++)
		c.arr[i]=arr[i];
		for (int i=0 ; i<a.size ; i++)
		c.arr[i + size] = a.arr[i]; 
		unique();
		return c;
	}
	
	bool Subset(SET S)
	{
		int flag;
		for(int i = 0 ; i<size ; i++)
		{
			for(int j = 0 ; j < S.size ; j++)
			{
				if(arr[i] == S.arr[j])
				{
					flag = 1;
					break;
				if(flag == 0)
				return 0;
				}
				return 1;
			}
		}
	}
	
	SET Setdiff(SET A)
	{
		SET obj;
			obj.size = size;
			obj.arr = new int[size];
			for(int i = 0 ; i < size ; i++)
				obj.arr[i] = arr[i];
			for(int i = 0 ; i < obj.size ; i++)
			{
				for(int j = 0 ; j < A.size ; j++)
				{
					if(obj.arr[i] == A.arr[j])
					{
						for(int k = i ; k < obj.size ; k++)
						obj.arr[k] = obj.arr[k+1];
						--obj.size;
						j--;
					}
				}
			}return obj;
	}
	
};

int main()
{
	SET S , S1 , C;
	bool flag1 = 0;
	int choice;
	
	S.Setsize();
	S.input();
	S.output();
	S1.Setsize();
	S1.input();
	S1.unique();
	S1.output();
	
	menu();
	
	
	cout << "Enter your choice : ";
    cin>>choice;
    cout << "Your choice is : " << choice << endl<<endl;
    
    
    switch (choice) {
    case 1: {
    	cout<<"Cardinality of Set 1 is : ";
    	S.cardinality();
    	cout<<"Cardinality of Set 2 is : ";
    	S1.cardinality();
        break;
    }
    case 2: {
    	cout<<"Set 1"<<endl<<endl;
    	S.ismember();
    	cout<<"Set 2"<<endl<<endl;
    	S1.ismember();
    	break;
       	
    }
    case 3: {
        C = S.Setunion(S1);
		C.unique();
		cout<<"Union of the two sets = ";
		C.output1();
        break;
    }
    case 4: {
        // C = S.intersection(S1);
	    // C.unique();
	    // C.output1();
        break;
    }
    case 5:{
    	//	flag1 = S.Subset(S1);
		//	flag1.unique();
		//	C.output1();
    	
		break;
	}
	case 6:{
		C = S.Setdiff(S1);
		C.unique();
		cout<<"Set-difference of the two sets = ";
		C.output1();
		
		break;
	}
   
    default:{
        cout<<"Wrong Input\n";
    }
}
	return 0;
	

	
}
					

