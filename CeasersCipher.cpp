#include<iostream>
#include<string.h>
using namespace std;


//defining the encryption function
char encrypt(char text[100],int key)
	{
	int p=0,encryptkey;
	for(int i = 0 ; i<strlen(text);i++)
	{
		p = int(text[i]);//stores the ascii values of the text alaphabets
		p = (p + key);//encrypting the Plain text by adding key value to existing alpabet
		text[i]= char(p);
		
	}
	cout<<"The encrypted plain text is now safe and changes to : "<<text<<endl;
		
		
	}

int main()
 {
  char text[100];
  int key;
  cout<<"Enter the text to encrypt"<<endl;
  cin>>text;
  cout<<"Enter the cipher Shift"<<endl;
  cin>>key;
  encrypt(text,key);
  
  
  
     
	
	
	

	
 return 0;	
 }
