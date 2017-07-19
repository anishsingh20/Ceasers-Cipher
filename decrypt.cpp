#include<iostream>
#include<string.h>
using namespace std;



//defining the decryption function

char decrypt(char text[100],int key)
{
	int p=0,encryptkey;
	for(int i = 0 ; i<strlen(text);i++)
	{
		p = int(text[i]);
		p = (p-key);
		text[i] = char(p); 
		
		
	}
	cout<<"The message is decrypted as :"<<text<<endl;
	
}

int main()
{
	int key ;
	char text[100];
	
	cout<<"Enter the Encrypted Text"<<endl;
	cin>>text;
	cout<<"Enter the Ciphers shift"<<endl;
	cin>>key;
	
	decrypt(text,key);
	

	
return 0 ;
}
