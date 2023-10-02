# Harvard-CS50-Encryption-PS2
This program encrypts any text based on a given alphabetical "key" inputed by the user and then prints the encrypted message. It functions by first requesting the user with a text key that must be 26 characters long, only alphabetical and have no repeated characters. After that, it takes the final message to encrypt and interpols each letter based on the actual alphabetical ASCII chart to actually be in the same position but now referencing the inital key passed.

For example, if the key used by the user was:      **VCHPRZGJNTLSKFBDQWAXEUYMOI**

In case the orginal text was:  **"hello, world"**

The encrypted text would be: **"jrssb, ybwsp"**
