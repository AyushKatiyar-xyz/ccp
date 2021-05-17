//sum of first 10 natural numbers

#include <stdio.h>
int main()
{
    int i = 1, sum;

    while (i <= 10)
    {

        sum += i;
        i++;
    }
    printf("the sum is %d", sum);

    return 0;
}