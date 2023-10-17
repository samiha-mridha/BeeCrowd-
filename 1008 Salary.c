#include<stdio.h>
int main () {
    int a;
    double b, c, product;
    scanf("%d", &a);
    scanf("%lf %lf", &b, &c);

    product = b*c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", product);

    return 0;


}
