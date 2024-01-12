#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, ExScore, average, final;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10.0;
    if (average >= 7.0)
    {
        printf("Media: %.1f\nAluno aprovado.\n", average);
    }
    else if (average < 5.0)
    {
        printf("Media: %.1f\nAluno reprovado.\n", average);
    }
    else
    {
        printf("Media: %.1f\nAluno em exame.\n", average);
        scanf("%f", &ExScore);
        printf("Nota do exame: %.1f\n", ExScore);
        final = (average + ExScore) / 2;
        if (final >= 5)
        {
            printf("Aluno aprovado.\nMedia final: %.1f\n", final);
        }
        else
        {
            printf("Aluno reprovado.\nMedia final: %.1f\n", final);
        }
    }
    return 0;
}
