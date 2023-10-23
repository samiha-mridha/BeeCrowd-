#include<stdio.h>
#include<math.h>
int main ()
{
    char name[100];
    double  sallary, sale, total;
    scanf("%s[^\n]", name);
    scanf("%lf %lf", &sallary, &sale);

    total = sallary + (sale * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
