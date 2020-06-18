#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //declare variables, initialize certain variables.
    long long cardnumber;
    long long tempcardnum;
    int sum = 0;
    int currentNumber;
    bool dub = false;
    int cardLength = 0;
    int firstTwo;
    int last;
    int secondLast;

    //ask user to input a card number.
    printf("Number: ");
    cardnumber = get_long_long();
    tempcardnum = cardnumber;

    // test cardnumber for validity
    while (tempcardnum != 0) {

        //set tempcardnum variable and modulo 10 to
        currentNumber = (tempcardnum % 10);

        //double every other number starting with the 10's place
        if (dub) {

            //if dub is true times by two then add the product numbers
            if (2 * currentNumber >= 10) {
                sum += 1 + ((2 * currentNumber) % 10);
            }

            //if dub is false
            else {
                sum += (2 * currentNumber);
            }

        }

        //sum every other number starting with the 1's place
        else {
            sum += currentNumber;
        }

        //count the length of the card number
        cardLength++;

        //move through the digits of the card number
        tempcardnum /= 10;

       //change to true or false to double number
        dub = !dub;

        //move through characters
        secondLast = last;
        last = currentNumber;
    }

    //find last two characters
    firstTwo = (last * 10) + secondLast;

    //test card number with length and first two determining the company
    if (sum % 10 == 0){
        //amex if(15 digits && starts with 34 || 37)
        if (cardLength == 15 && (firstTwo == 34 || firstTwo == 37)) {
            printf("AMEX\n");
        }

        // mastercard if( 16 && starts 51, 52, 53, 54,55)
        else if (cardLength == 16 && (firstTwo >= 51 && firstTwo <= 55)) {
            printf("MASTERCARD\n");
        }

        //visa if(13 or 16 && starts 4)
        else if ((cardLength == 13 || cardLength == 16) &&  last == 4) {
            printf("VISA\n");
        }

        //return invalid
        else {
            printf("INVALID\n");
        }
    }

    //return invalid
    else {
        printf("INVALID\n");
    }

}
//prompt for input
//multiply everyother
//sum eo
//add to remaining digits
//vailidate checksum
//validate company identifier
//validate company length
//keep track of first two letters && length