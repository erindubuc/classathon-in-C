#include <stdio.h>
#include <math.h>
#include <cs50.h>

long long factorialize(int);

int main()
{
    printf("%lld\n", factorialize(8));
    return 0;
}


long long factorialize(int num)
{
     // Get a number a num to factorialize from user
    // num = get_int("Number to factorialize: ");
    // printf("%i\n", num);

    // long long factorial = (long long)num;

    if (num == 0)
    {
        // printf("-1\n");
        return 1;
    }
    else
        return (num * factorialize(num -1));

    return 0;
}
