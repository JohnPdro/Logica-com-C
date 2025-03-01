#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    for(int linha=1; linha<=num; linha++){
        //printf("%i", linha);

        // Imprimir * da linha
        for(int asterisco=1; asterisco<=linha; asterisco++){
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
