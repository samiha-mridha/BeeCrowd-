#include <stdio.h>
int main()
{
    float num, total=0, average;
    int positive=0;
    for (int i =0; i<6; i++) {
        scanf("%f", &num);
    if (num > 0) {
        positive++;
        total +=num ;
        }
    }
    printf("%d valores positivos\n", positive);
    if (positive > 0) {
        average = total/positive;
        printf("%.1f", average);
    }
    return 0;
}