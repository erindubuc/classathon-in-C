#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


int sumPrimes(int num);
int getPrimes(int max);

int main(int argc, string argv[])
{
    if (argc !=2 || atoi(argv[1]) < 0)
    {
        printf("Please enter a number that is greater than 0.\n");
        return 1;
    }

    int arg = atoi(argv[1]);
    int result = sumPrimes(arg);
    printf("%i \n", result);
}

int isPrime(int num)
{
    int i; //i = placeholder for 2 (1st prime)

    for (i = 2; i < num; i++)
    {
        if (!(num % i))
            return false;
    }
        return true;
}

int sumPrimes(int num)
{
    int sum = 0;

    for (int i = 2; i <= num; i++)
    {
        if(isPrime(i))
            sum += i;
    }

  return sum;
}









