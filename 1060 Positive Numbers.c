#include <stdio.h>
int main()
{
    double number;
    int i, pos = 0;

    for (i = 0; i <= 5; i++)
    {
        scanf("%lf", &number);
        if (number > 0)
        {
            pos++;
        }
    }
    printf("%d valores positivos\n", pos);
    return 0;
}