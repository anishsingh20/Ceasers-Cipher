//monoalphabetic cipher
//monoalphabatic ciphers are a form of Substitution ciphers which uses fixed substitution over the entire message 
#include<iostream>
#include<string>
#include<cctype>
#include<stdlib.h>

using namespace std;



int main()
{
	int choice,ascii,cpt;
	string plaintext;
	string ciphertext;

	
	for(;;)
	{
	cout<<"------------Enter your choice-----------"<<endl;
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
			    	    cpt = (ascii + 1);//cipher text in ascii value
			    	    plaintext[i] = char(cpt);//converting ascii to character value
			    	    }//end if
			    }//end for
			    cout<<"The cipher Text is : "<<plaintext<<endl;//the cipher text
			     	
			   continue;
			case 2:
			   continue;
			case 3:
			   break;	
		}
		
	break;	
	}//end for
	

	
	
	
	
return 0;	
}
