#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for(int linha=1; linha<=num; linha++)
    {
        for(int coluna=1; coluna<=num; coluna++)
        {
            if((linha == coluna) || (coluna == num - linha + 1))
            {
                printf("O");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
