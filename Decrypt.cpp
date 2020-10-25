#include "Decrypt.h"
#include <iostream>

string Decrypt::decrypt(string message, int key) 
{
	string decrypted = "";
	
	for (int i = 0; i < message.length(); i++) {
		char ch = int(message[i]);
		double val = ch - key;
		decrypted += val;
	}
	return string(decrypted);
}
