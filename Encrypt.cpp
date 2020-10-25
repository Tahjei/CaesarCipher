#include "Encrypt.h"
#include <iostream>

string Encrypt::encrypt(string message, int key)
{
    string encrypted = "";

    for (int i = 0; i < message.length(); i++)
    {
        int ch = int(message[i]);
        double val = ch + key;
        encrypted += val;
    }
    return string(encrypted);
}
