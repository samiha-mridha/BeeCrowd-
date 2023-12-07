#include<stdio.h>
int main ()
{
    int n, i, x;
    scanf("%d %d", &x, &n);
    for (i = 1; i <=n; i++ ) {
        printf("%d", i);
        if (! (i%x) || i==n) 
            printf("\n");
        else 
            printf(" ");
    }

}