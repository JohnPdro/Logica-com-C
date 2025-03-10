#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, metade; 

    printf("Digite um numero: ");
    scanf("%i", &num);

    metade = num / 2;

    for(int linha = 1; linha <= metade; linha++) {
        for(int coluna = 1; coluna <= linha; coluna++) {
            printf("*");
        }

        printf("\n");
    }

    if (num%2 != 0) {
        for(int coluna = 1; coluna <= metade + 1; coluna++) {
            printf("*");
        }

        printf("\n");
    }

    for(int linha = metade; linha >= 1; linha--) {
        for(int coluna = linha; coluna >= 1; coluna--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
