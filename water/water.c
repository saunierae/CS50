#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt User for Minutes spent in shower.
    printf("Minutes: ");

    //Receive minutes spent in shower and put in variable.
   int minutes = get_int();
do
{
    //Math conversion of minutes spent in shower to bottles of water.
    int bottles = (128 * (1.5 * minutes)) / 16;

    //Print out amount of water bottles consumed in shower.
    printf("Bottles: %i\n", bottles);
}
//Minutes must be more than zero.
while (minutes < 0);
}




