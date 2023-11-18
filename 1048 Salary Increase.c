#include <stdio.h>
#include <math.h>
int main()
{
    double salary;
    scanf("%lf", &salary);

    if (salary <= 400)
    {
        printf("Novo salario: %.2lf\n", ((salary * 15) / 100) + salary);
        printf("Reajuste ganho: %.2lf\n", ((salary * 15) / 100));
        printf("Em percentual: 15 %%\n");
    }
    else if (salary <= 800)
    {
        printf("Novo salario: %.2lf\n", ((salary * 12) / 100) + salary);
        printf("Reajuste ganho: %.2lf\n", ((salary * 12) / 100));
        printf("Em percentual: 12 %%\n");
    }
    else if (salary <= 1200)
    {
        printf("Novo salario: %.2lf\n", ((salary * 10) / 100) + salary);
        printf("Reajuste ganho: %.2lf\n", ((salary * 10) / 100));
        printf("Em percentual: 10 %%\n");
    }
    else if (salary <= 2000)
    {
        printf("Novo salario: %.2lf\n", ((salary * 7) / 100) + salary);
        printf("Reajuste ganho: %.2lf\n", ((salary * 7) / 100));
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        printf("Novo salario: %.2lf\n", ((salary * 4) / 100) + salary);
        printf("Reajuste ganho: %.2lf\n", ((salary * 4) / 100));
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}