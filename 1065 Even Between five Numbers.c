#include <stdio.h>
#include <math.h>
int main()
{
    int a, i, even = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
            even++;
    }
    printf("%d valores pares\n", even);

    return 0;
}