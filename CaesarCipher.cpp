// CaesarCipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Encrypt.h"
#include "Decrypt.h"

using namespace std;

int main()
{
    string message = "";
    double key = 0.0;
    string encrypted_message = "";
    string decrypted_message = "";

    Encrypt e;
    Decrypt d;
    

    cout << "Please enter a message you would like to have encrypted: \n";
    getline(cin, message);
    cout << "Please enter a key to shift your message by: \n";
    cin >> key;
    encrypted_message = e.encrypt(message, key);
    cout << " The encrypted message is: " + encrypted_message + "\n";
    //cout << " Please enter a message you would like to have decrypted: \n";
    //getline(cin, message);
    //cout << " Please enter the key the message was shifted by: \n";
    //cin >> key;
    //decrypted_message = d.decrypt(message, key);
    //cout << "The decrypted message is: " + decrypted_message + "\n";

    return 0;
}
