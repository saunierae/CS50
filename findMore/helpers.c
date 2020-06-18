/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdlib.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */



// is int value the kry or n?
bool search(int value, int values[], int n)
{
     //if n is less than zero, return false
     if (n < 0) {
     return false;
     }

     //declare variable
     int arrHalf;

    //implement a searching algorithm
    //while n is greater than zero
    while (n > 0) {

        //divide array by 2
        arrHalf = (n / 2);

        //if there are no more values in the array
        //and n is 1 return false
        if (n == 1 && values[0] != value) {
            return false;
        }

        //if the middle value is the value, return true
        if (values[arrHalf] == value) {
            return true;
        }

        // if the middle value is greater than the value
        else if (values[arrHalf] > value) {

            //make array half the size
            //removes right size and sets
            //first array to first index after previos middle
            n = (n/2);
        }

        // else if the middle value is less than the value
        else {

            //full array minus half of the array
            n = n - (n/2);

            //array values set to values plus arrHalf
            values = values + arrHalf;
        }

    }
    return false;
}

/**
 * Sorts array of n values.
 */
//implement a sorting algorithm
void sort(int values[], int n)
{
    //declare and ititalize variables
    int maxArr[65536];
    int numPrinted = 0;

    //iterate through the max array length
    for (int i = 0; i < 65536; i++){

        //start counting at zero
        maxArr[i] = 0;
    }

    for (int i = 0; i < n; i++) {

        //for each value in the array
        //count the number of times i occurs in value
        //then continue to the next max array character
        maxArr[values[i]]++;
    }

    //iterate through the max array length
    for (int i = 0; i < 65536; i++) {

        //iterate through each count in max array
        //to determine number of times to store i
        for(int j = 0; j < maxArr[i]; i++) {

            //print each value at stored index
            values[numPrinted] = i;

            //increase index count
            numPrinted++;
        }
    }


    return;
}
