/*
Solicite ao usuário um número e utilizando este número imprima a figura conforme exemplo abaixo:

Digite um número: 5 
Resultado:
*
**
***
****
*****
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int num;

    printf("Digite um numero:");
    scanf("%i", &num);

    for (int linha = 0; linha <= num; linha++) {

        for (int coluna = 0; coluna <= linha; coluna++) {
            printf("*");
        }
        
        printf("\n");
    }
    

    return 0;
}
