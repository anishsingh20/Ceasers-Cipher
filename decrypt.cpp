#include<iostream>
#include<string.h>
using namespace std;



//defining the decryption function

char decrypt(char text[100],int key)
{
	int p=0;
	for(key = 0 ; key < 26 ; key ++) //this loop will check for all possible combinations 
    {
	
	for(int i = 0 ; i<strlen(text);i++)
	{
		p = int(text[i]);//stores the ascii values
		p = (p-key);//applying the shifting technique
		text[i] = char(p); 
		
		
	}//end for
	cout<<"The message is decrypted as :"<<text<<endl;
	
   }//end for      

}//end decrypt


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
