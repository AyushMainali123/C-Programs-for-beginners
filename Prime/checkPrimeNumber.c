/*Program to check whether given number is prime or not*/
#include <stdio.h>

int isPrime(int x)          //Function to check for prime number
{
    for(int i = 2;  i*i <= x; i++)
    {
        if(x%i == 0)       //If x is divisible by any i, x is not prime
            return 0;
    }
    return 1;   //If x is not divisible by any i, x is prime
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);      //Input number from user

    if(isPrime(num))    //If returned value from isPrime() is 1, number is prime
    {
        printf("%d is Prime Number", num);
    }
    else
        printf("%d is not a prime number", num);
    return 0;
}
