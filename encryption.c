#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Print Error Messages

    string K = argv[1];
    int Klen = strlen(K);

    if(argc != 2)
    {
        printf("Usage: ./substitution YOURKEYHERE \n");
        return 1;
    }

    for(int e = 0; e < Klen; e++)
    {

        for(int r = e + 1; r < Klen; r++)
        {
            if(toupper(K[e]) == toupper(K[r]))
            {
                printf("FUsage: ./substitution YOURKEYHERE \n");
                return 1;
            }
        }

        if(isalpha(K[e]) && Klen == 26 && K[e] != K[e-1] && K[e] != 0 && K[e] - 32 != K[e+1])
        {

        }

        else
        {
            printf("ERROR: Key must be 26 characters long, only alphabetical and with no repeated characters. \n");
            return 1;
        }

    }

    // Get Text To Encrypt


    string ptext = get_string("Plaintext: ");


    // Iterate and assign each character to "i"  (ASCII Uppercase)

    printf("ciphertext: ");

    for(int i = 0; i < strlen(ptext); i++)
    {
        int x = 0;

        if(ptext[i] < 91 && ptext[i] > 64)
        {

        while(ptext[i] != (x+65))
        {
            x++;
        }
            ptext[i] = K[x];



        printf("%c", toupper(ptext[i]));
        }

        // Repeating for ASCII lowercase

        else if(ptext[i] > 96 && ptext[i] < 123)
        {

        while(ptext[i] != (x+97))
        {
            x++;

        }
        ptext[i] = K[x];

        printf("%c", tolower(ptext[i]));
        }

        //Print all non-alphabetical characters

        else
        {
            printf("%c", ptext[i]);
        }

    }

    printf("\n");
}
