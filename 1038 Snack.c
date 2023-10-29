#include<stdio.h>
#include<math.h>
int main () 
{
    int  code, quantity;
    float total;
    scanf("%d %d", &code, &quantity);
    if (code == 1) {
        total = quantity*4.0;
    }
    else if (code == 2) {
        total = quantity*4.50;
    }
    else if (code == 3) {
        total = quantity*5.0;
    }
    else if (code == 4) {
        total = quantity*2.0;
    }
    else if (code == 5) {
        total = quantity*1.50;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}