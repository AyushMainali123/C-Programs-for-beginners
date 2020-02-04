/*This is the program to calculate first 100 prime numbers
using process called sieve of eratosthenes*/
#include <stdio.h>
int arr[100];   //Declaring global arr of size 100 with initial value of 0

void sieve()    //sieve ethod to print prime numbers
{
    //Here arr[i] = 1 indicates i is not prime
    arr[0] = 1;     //declaring 0 is not prime
    arr[1] = 1;     //declaring 1 is not prime
    for(int i = 2; i < 100; i++)  //looping from 2 to 100
    {
        if(arr[i] == 0)  //if i is prime if statement executes
        {
            for(int j = i*2; j < 100; j+=i) //All the multiples of i is set to not prime
            {
                arr[j] = 1;  //multiple of i is not prime
            }
        }
    }
}

int main()
{
    sieve(); //calling the function
    for(int i = 0; i < 100; i++)
    {
        if(arr[i] == 0)
            printf("%d ", i); //If i is prime, print it
    }
    return 0;       //Return statement
}
