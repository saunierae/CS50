#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    //declare variables
    string name;
    bool spaceLast = true;

    //user input name
    name = get_string();

    // verify that a string is entered
    if(name != NULL); {

        //iterate through each character in the string
        for(int i = 0, n = strlen(name); i < n; i++) {

            //if a space is found
            if (strncmp(&name[i], " ", 1) != 0) {

               //if there is a space found bring character to upper
                if (spaceLast) {
                    printf("%c", toupper(name[i]));

                }

                //set space last to false to search for space again
                spaceLast = false;
            }

            // if space is found set to true
            else {
                spaceLast = true;
            }

        }

        //print new line
        printf("\n");
    }
}

/* Take a full name
get the length [ ]
get the first letter from all arrays [ ]
checking for \0
print out initials
use to upper to print out initials
only submit alpha characters and check for special characters
*/

/*
while
{
get string
make an array
if encountering \0
then create another array
take each array at [0]
change [0] to upper
printf("%c\n", chararcter
any letter after a space
if first character grabit
if first character after a spcae grab it
is not spaces
*/