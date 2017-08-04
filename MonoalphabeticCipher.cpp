//monoalphabetic cipher
//monoalphabatic ciphers are a form of Substitution ciphers which uses fixed substitution over the entire message 
#include<iostream>
#include<string>
#include<cctype>
#include<stdlib.h>

using namespace std;



int main()
{
	int choice,ascii,cpt,key;
	string plaintext;
	string ciphertext;
	key = rand() % 26  ;
	cout<<key;
	
	for(;;)
	{
	cout<<"\n------------Enter your choice-----------\n"<<endl;
	cout<<"\n1)Encrypt\n2)Decrypt\n3)Exit"<<endl;
	cin>>choice;	
		switch(choice)
		{	//encrypt case
			case 1:
			    cout<<"Enter the plainText"<<endl;
			    cin>>ws;
			    getline(cin,plaintext); //to consider spaces in string input
			    
			    for(unsigned i = 0 ; i<plaintext.size(); i++)
			    {
			    	if(isalpha(plaintext[i])) 
				    {
				    
			    	    ascii = int(plaintext[i]); //storing the ascii value of the string
			    	    cpt = ((ascii + key)%26);//cipher text in ascii value
			    	    plaintext[i] = char(cpt);//converting ascii to character value
			    	    }//end if
			    }//end for
			    cout<<"The cipher Text is : "<<plaintext<<endl;//the cipher text
			     	
			   continue;
			case 2://decryption
				cout<<"Enter the Cipher Text"<<endl;
			        cin>>ws;//clearing whitespaces
			        getline(cin,ciphertext); //to consider spaces in string input
			    
			    for(unsigned i = 0 ; i<ciphertext.size(); i++)
			    {
			    	if(isalpha(ciphertext[i])) 
				    {
				    
			    	    ascii = int(ciphertext[i]); //storing the ascii value of the string
			    	    cpt = ((ascii - key) % 26);//cipher text in ascii value
			    	    ciphertext[i] = char(cpt);//converting ascii to character value
			    	    }//end if
			    }//end for
			    cout<<"The Original Message is : "<<ciphertext<<endl;//the cipher text
			     	
			   continue;
			case 3:
			break;
		}//end switch
		
	break;	
	}//end for
	

	
	
	
	
return 0;	
}
