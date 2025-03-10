#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    for(int linha=num-1; linha>=0; linha--){
        // 1a L�gica - Imprimir - da linha
        for(int asterisco=1; asterisco<=linha; asterisco++){
            printf("-");
        }
        
        // 2a L�gica - Imprimir *
        printf("*");

        // 3a L�gica - Imprimir -*
        for(int trac_ast=1; trac_ast<=(num-linha-1); trac_ast++)
        {
            printf("-*");
        }

        printf("\n");
    }


    return 0;
}
