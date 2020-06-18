#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[1])
{
    //if argc does not have two arguments exit, return 1
    if (argc != 2) {
        printf("Invalid Arguemnt. Exiting");
        return 1;
    }

    //if argv is null exit, return 1
    if (argv[1] == NULL) {
        return 1;
    }

    //declare variables
    string m;
    int k = atoi(argv[1]);

    //Get input from user
    printf("Plaintext: ");
    m = get_string();

    //iterate through provided string
    for (int i = 0, n = strlen(m); i < n; i++) {

            //if provided characters are alpha, turn into array
            if (isalpha(m[i])) {

                //if character is uppercase
                if(isupper(m[i])){

                    //move character by the key but keep uppercase
                    m[i] = (((m[i] + k) - 'A') % 26) +'A';
                }

                //if character is lowercase
                else {

                    //move character by the key but keep lowercase
                    m[i] = (((m[i] + k) - 'a') % 26) +'a';
                }
            }
            //if not alpha leave as is and print
            else {

            }

    //print out Ciphertext
    printf("ciphertext: %s\n", m);
    }
        return 0;
}
/*input argument from user for key
non-negative int for the key
for ea character in plaintext
    if alphabetic perserve case
    shift plain character by key
print cyphertext
shift letters only isalpha
isalpha('Z') true
isupper
islower

if (k > 0) {
        for (i = 0, )
    }

 if ('a' <= m[i] && m[i] <= 'z') {

        }

        else if ('A' >= m[i] && m[i] <= 'Z') {

        }

        else if (isalpha(m[i]) != 0) {

        }
        //m[i] = (m[i] + 0 + k) % 26;
        //m[i] = (m[i] + 27 + k) % 26;

alpha index
(0 + key) % 26
('Y' + key) % 26 if (range)
add 97 or 67 for alpha and lower
start with ascii
encipher
print ascii
must go ascii to alpha
alpha to ascii
take strnlen of text to print out text
always move m if m moved then move k
only move values that need to be moved
figure out atoi
function for 0 to 26 call
*/
