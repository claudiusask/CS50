#include <stdio.h>
#include <math.h>

//declare the function
int add_two_ints(int a, int b);

main() {
    int height;
    
    float change;

    do
    {
        change = 0.41; //get_float("How much change is owed: \n");

    } while (change < 0);

    printf("Your change is %.2f\n", change);

    int twentyFive = round(change * 100);
    int ten = twentyFive % 25;
    int five = ten % 10;
    int one = five % 5;

    printf("Coins of 25-cents %i\n", twentyFive / 25);
    printf("Coins of 10-cents %i\n", ten / 10);
    printf("Coins of 5-cents %i\n", five / 5);
    printf("Coins of 1-cents %i\n", one / 1);

    int a = 3;
    int b = 2;
    int z = add_two_ints(a, b);
    printf("the result of my add_two_ints function %i and %i is %i.", a, b, z);
}


int add_two_ints(int a, int b)
{
    int z = a + b;
    return z;
}