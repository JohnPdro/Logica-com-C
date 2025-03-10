#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma = 0, impar = 1, contraImpares = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (soma < num)
    {
        printf("\nImpar = %d - Soma = %d", impar, soma);

        soma = soma + impar;
        impar = impar + 2;
        contraImpares++;
    }

    if(soma == num) {
        printf("\n%d eh um quadrado perfeito", num);
        printf("\n%d eh a raiz de %d", contraImpares, num);
    } else {
        printf("\n%d NAO eh um quadrado perfeito", num);
    }
}