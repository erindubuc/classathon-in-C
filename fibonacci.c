#include <stdio.h>
#include <math.h>

int sumFibs(int num);

int main()
{
    printf("%i\n", sumFibs(6));
}

int sumFibs(int num)
{
  int first = 1;
  int second = 1;
  int third = 2;
  int sum = 2;
    for (;third <= num;)
    {
        if(third % 2 != 0)
            sum += third;

        third = first + second;
        first = second;
        second = third;
        // printf("%d\n" );
    }
    return sum;
}


