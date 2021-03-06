/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */

#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    //if argc is not provided with 2 arguments and 3 arguments
    if (argc != 2 && argc != 3)
    {
        //print out the usage for the program
        printf("Usage: ./generate n [s]\n");

        //exit
        return 1;
    }

    //convert argv[1] from a string to an integer
    int n = atoi(argv[1]);

    //if argc is equal to 3 arguments
    if (argc == 3)
    {

        //initializes the high order 32bits of Xi to argument
        // argv[2] is converted from alpha to int
        srand48((long) atoi(argv[2]));
    }
    else
    {
        //initializes the high order 32bits of Xi to argument
        //time is set to null
        srand48((long) time(NULL));
    }

    //iterate through integers while integers are lower than n
    for (int i = 0; i < n; i++)
    {

        //print out an integer number that is randomly generated using drand48 *
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
