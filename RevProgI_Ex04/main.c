/*
Digite um número: 5
Resultado:
0 *-*-*-*-*         4 = 5 - 0 - 1 = num - linha - 1
1 -*-*-*-*          3 = 5 - 1 - 1 = num - linha - 1
2 --*-*-*           2
3 ---*-*            1
4 ----*             0

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero:");
    scanf("%i", &num);

    for(int linha=0; linha<num; linha++)
    {
        // 1a Logica - Imprimir os tracinhos
        for(int tracinhos=1; tracinhos<=linha; tracinhos++)
        {
            printf("-");
        }

        // 2a Logica - Imprimir o asterisco
        printf("*");

        // 3a Logica - Imprimir o conjuntinho de -*
        for(int tracinho_asterisco=1; tracinho_asterisco<=(num-linha-1); tracinho_asterisco++)
        {
            printf("-*");
        }

        printf("\n"); // Quebra de Linha
    }

    return 0;
}
