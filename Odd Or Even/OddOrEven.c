#include <stdio.h>

int main()
{
    int num; //Declaring a number

    printf("Enter a number: ");
    scanf("%d", &num); //Taking number as input from user

    /*If remainder is 0, when multiplied by 2, number is even else number is odd number*/
    if(num%2 == 0)
        printf("Even Number");
    else printf("Odd Number");

    return 0; //Return Statement
}
