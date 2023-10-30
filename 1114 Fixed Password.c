#include <stdio.h>
int main()
{
    int numbre;
    while (1)
    {
        scanf("%d", &numbre);

        if (numbre == 2002)
        {
            printf("Acesso Permitido%c", 10);
            break;
        }
        else
            printf("Senha Invalida%c", 10);
    }

    return 0;
}