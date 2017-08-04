#include<iostream>
#include<string>
#include<cctype>


using namespace std;
//program to encrypt a plaintext message using a VIGENERE cipher which is a polyalphabetic substitution technique which
//uses different letters for to encrypt each alphabet in plaintext.

//function to take key as input
string key(string str, string key)
{
	int x = str.size();
	for(int i=0;;i++)
	{
		if(x==i)
		   i=0;
		if(key.size() == str.size() ) //if length of string and key matches then come out
		   break;
		key.push_back(key[i]); 
		
	}
	return key;
} //function to generate a key


//function to encrypt the plaintext
string encrypt(string str , string key)
{
	string cipherText;
	for(int i=0;i<str.size();i++)
	{
		int x = (str[i] + key[i])%26;
		cout<<x<<endl;
		
		x += 'A'; //converting to alphabets values
		cipherText.push_back(x);
		
	}
	return cipherText;
}


int main()
{	//an array of alaphabets which will be used in substitution

	
return 0;
}
