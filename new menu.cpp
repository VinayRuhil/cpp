#include <iostream>
using namespace std;

int stringLength(const char* str) {
    	int len = 0;
    	while(*str != '\0') {
        len++;
        str++;
    	}
    	return len;
		}


int main(){
	
	char str1[1000] , str2[1000] ;
	int choice , length , i , j;
	
	//cout<<"Enter the string = ";
	//cin>>str1;
	



	while(true){
		
		cout<<"STRING MANIPULATION"<<endl;
		cout<<"1. Length of the string"<<endl;
		cout<<"2. Concatination"<<endl;
		cout<<"3. Compare two strings"<<endl;
		cout<<"4. Address of each character in the string"<<endl;
		cout<<"5. Lowercase characters to uppercase"<<endl;
		cout<<"6. Reverse the string"<<endl;
		cout<<"7. Inserting a string at user-specific location"<<endl;
		cout<<"8. Exit"<<endl;
		cout<<"Enter your choice (1-8)= ";
		cin>>choice;
		
		
		
		
		
		switch(choice){
			case 1:
				const char* str = "Vinay Ruhil";
				cout<<"Length of the string = "<<stringLength(str)<<endl;
				break;
		  
            case 2: 
            	cout<<"Enter 2nd string = ";
				cin>>str2;
				
				for(int i = 0 ; str1[i]!='\0' ; i++)
			  for(int j = 0 ; str2[j]!='\0' ;  j++){
					str1[i+j] = str2[j];
				}
				str1[i+j] = '\0';
				cout<<"After concatination = "<<str1<<endl;
		
			
			
		}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
