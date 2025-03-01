/*
Digite um número: 5
Resultado:
O-----O
-     -
-     -
-     -
O-----O
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero:");
    scanf("%i", &num);

    for(int linha=1; linha<=num; linha++)
    {
        if(linha==1 || linha==num)
        {
            printf("O");

            for(int tracinho=1; tracinho<=num; tracinho++)
            {
                printf("-");
            }

            printf("O");
        }else
        {
            printf("-");

            for(int tracinho=1; tracinho<=num; tracinho++)
            {
                printf(" ");
            }

            printf("-");
        }

        printf("\n"); // Quebra de linha
    }

    return 0;
}
