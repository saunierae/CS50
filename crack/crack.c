#define _XOPEN_SOURCE
#include <unistd.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    //declare variables
    char str[5];
    str[0] = '\0';
    str[1] = '\0';
    str[2] = '\0';
    str[3] = '\0';
    str[4] = '\0';
    char salt[3];
    salt[2] = '\0';

    //return if there are not two arguments provided
    if (argc != 2) {
        return 1;
    }

    //get first two salt characters from argv
    salt[0] = argv[1][0];
    salt[1] = argv[1][1];


    //if password is 1 character iterate through
    for (int i = 0; i < 52; i++) {

        //if lower case
        if (i < 26) {

            //set the first character as i+a to make a lower case
            str[0] = (i + 'a');
        }
        else {
            //set the first character as i+A-26 to make an upper case
            str[0] = (i + 'A' - 26);
        }

        //if encrypted is the same as our hash, print str, return.
        if (strcmp (argv[1], crypt(str, salt)) == 0) {
            printf("%s\n", str);
            return 0;
        }
    }

    //if password is 2 characters iterate through 1st character
    for (int i = 0; i < 52; i++) {

        //if lower case
        if (i < 26) {

            //set the first character as i+a to make a lower case
            str[0] = (i + 'a');
        }

        //set the first character as i+A-26 to make an upper case
        else {
            str[0] = (i + 'A' - 26);
        }

        //if password is 2 characters iterate through second character
        for (int j = 0; j < 52; j++) {

            //if lower case
             if (j < 26) {

                //set the 2nd character as i+a to make a lower case
                str[1] = (j + 'a');
            }

            //set the 2nd character as i+A-26 to make an upper case
            else {
                str[1] = (j + 'A' - 26);
            }

            //if encrypted is the same as our hash, print str, return.
            if (strcmp (argv[1], crypt(str, salt)) == 0) {
                printf("%s\n", str);
                return 0;
            }
        }
    }

    //if password is 3 characters iterate through 1st character
    for (int i = 0; i < 52; i++) {

        //if lower case
        if (i < 26) {

            //set the first character as i+a to make a lower case
            str[0] = (i + 'a');
        }

        //set the first character as i+A-26 to make an upper case
        else {
            str[0] = (i + 'A' - 26);
        }


        //if password is 3 characters iterate through second character
        for (int j = 0; j < 52; j++) {

            //if lower case
             if (j < 26) {

                //set the 2nd character as i+a to make a lower case
                str[1] = (j + 'a');
            }

            //set the 2nd character as i+A-26 to make an upper case
            else {
                str[1] = (j + 'A' - 26);
            }

            //if password is 3 characters iterate through 3rd character
            for (int k = 0; k < 52; k++) {

                //if lower case
                 if (k < 26) {

                    //set the 3rd character as i+a to make a lower case
                    str[2] = (k + 'a');
                }

                //set the 3rd character as i+A-26 to make an upper case
                else {
                    str[2] = (k + 'A' - 26);
                }

                //if encrypted is the same as our hash, print str, return.
                if (strcmp (argv[1], crypt(str, salt)) == 0) {
                    printf("%s\n", str);
                    return 0;
                }
            }
        }
    }

    //if password is 4 characters iterate through first character
    for (int i = 0; i < 52; i++) {

        //if lower case
        if (i < 26) {

            //set the first character as i+a to make a lower case
            str[0] = (i + 'a');
        }

        //set the first character as i+A-26 to make an upper case
        else {
            str[0] = (i + 'A' - 26);
        }

        //if password is 4 characters iterate through second character
        for (int j = 0; j < 52; j++) {

            //if lower case
             if (j < 26) {

                //set the 2nd character as i+a to make a lower case
                str[1] = (j + 'a');
            }

            //set the 2nd character as i+A-26 to make an upper case
            else {
                str[1] = (j + 'A' - 26);
            }

            //if password is 4 characters iterate through 3rd character
            for (int k = 0; k < 52; k++) {

                //if lower case
                 if (k < 26) {

                    //set the 3rd character as i+a to make a lower case
                    str[2] = (k + 'a');
                }

                //set the 3rd character as i+A-26 to make an upper case
                else {
                    str[2] = (k + 'A' - 26);
                }

                //if password is 4 characters iterate through fourth character
                for (int l = 0; l < 52; l++) {

                    //if lower case
                     if (l < 26) {

                        //set the 4th character as i+a to make a lower case
                        str[3] = (l + 'a');
                    }

                    //set the 4th character as i+A-26 to make an upper case
                    else {
                        str[3] = (l + 'A' - 26);
                    }

                    //if encrypted is the same as our hash, print str, return.
                    if (strcmp (argv[1], crypt(str, salt)) == 0) {
                        printf("%s\n", str);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}

/*Let them know if they have not input correctly
no longer than 4 characters
only alphabetical
array up to 5 bites last being \0
iterate over like rows in mario
for loops concat
if equal return prtintf
check argc
check argv
('a' +i) offset for lower and upper then concat
first char is a +i, then next loop and next
first char concat second char concat ect to get multi character password then call crypt func if (crypt = 1 or whatver then return ext)
each loop runs twice one upper one lower
*/