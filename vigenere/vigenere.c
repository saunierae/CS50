#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // if there are not two arguments provided return 1
    if (argc != 2) {
        return 1;
    }

    //declare and initialize certain variables
    string m;
    string k = argv[1];
    int keyLength;
    int offset;

    //While alphabetical continue
    if (k != NULL) {

        //receive keylength from argv
        keyLength = strlen(k);

        //iterate through keylength
        for(int i = 0; i < keyLength; i++) {

            //take keylength characters and set to lower case
            k[i] = tolower(k[i]);

            //if the keylength does not have alphabetical characters return 1
            if ('a' > k[i] || k[i] > 'z') {
                return 1;
            }
        }

        // prompt user for plaintext
        printf("Plaintext: ");
        m = get_string();

        // if the plaintext is not null
        if (m != NULL) {

            // iterate through the plaintext
            for (int i = 0, j = 0, n = strlen(m); i < n; i++) {

                // create offset from the key
                offset = (k[j] - 'a');

                //if the offset from the plaintext is lowercase
                if ('a' <= m[i] &&  m[i] <= 'z') {
                    m[i] = (((m[i] + offset) - 'a') % 26) + 'a';
                    j = (j + 1) % keyLength;
                }

                //if the offset from the plaintext is uppercase
                else if ('A' <= m[i] &&  m[i] <= 'Z') {
                    m[i] = (((m[i] + offset) - 'A') % 26) + 'A';
                     j = (j + 1) % keyLength;
                }

            }
        }

        //return 1
        else {
            return 1;
        }

        //print out ciphertext of plaintext
        printf("ciphertext: %s\n", m);
    }

    //return 1
    else {
        return 1;
    }

    //return 0
    return 0;
}

