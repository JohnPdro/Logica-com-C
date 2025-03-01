/*
Digite um número: 6
Resultado:
1*
2**
3***   <---- a metade do valor digitado

3***
2**
1*

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, metade;

    printf("Digite um numero:");
    scanf("%i", &num);

    metade = num/2;

    // PARTE SUPERIOR - Imprime a quantidade de asterisco da linha
    for(int linha=1; linha<=metade; linha++)
    {
        for(int asterisco=1; asterisco<=linha; asterisco++)
        {
            printf("*");
        }
        printf("\n"); // Quebra de Linha
    }

    // QDO IMPAR
    if(num%2!=0)
    {
        for(int asterisco=1; asterisco<=metade+1; asterisco++)
        {
            printf("*");
        }
        printf("\n"); // Quebra de Linha
    }

    // PARTE INFERIOR - Imprime a quantidade de asterisco da linha
    for(int linha=metade; linha>=1; linha--)
    {
        for(int asterisco=1; asterisco<=linha; asterisco++)
        {
            printf("*");
        }
        printf("\n"); // Quebra de Linha
    }


    return 0;
}
