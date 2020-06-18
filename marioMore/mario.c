#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declare variables
    int height;
    int i;
    int row;

    //ask user for height until valid input
    do{
        printf("Height: ");
        height = get_int();
    }
   while (height < 0 || height > 23);

    // Print each row
   for (row = 0; row < height; row++){

       //Print proceeding spaces
       for (i = 0; i < height-row-1; i++){
           printf(" ");
       }

       //Print first set of hashes
       for (i = 0; i < row+1; i++) {
           printf("#");
       }

       //Print width between hashes
       printf("  ");

       //Print second set of hashes
        for (i = 0; i < row+1; i++) {
           printf("#");
       }

       //Print new line for row
       printf("\n");
   }
}


