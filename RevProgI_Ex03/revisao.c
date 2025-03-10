/*
Solicite ao usuário um número e utilizando este número imprima a figura conforme exemplo abaixo: 
Digite um número: 5 
Resultado:
----*
---*-*
--*-*-*
-*-*-*-*
*-*-*-*-*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Digite um numero:");
    scanf("%i", &num);

    for(int linha = num - 1; linha >= 0; linha--) {
        
        for(int colunaTraco = 1; colunaTraco <= linha; colunaTraco++) {
            printf("-");
        }

        printf("*");

        for(int colunaTracoAsterisco = 1; colunaTracoAsterisco <= (num - linha - 1); colunaTracoAsterisco++) {
            printf("-*");
        }

        printf("\n");
    }

    return 0;
}