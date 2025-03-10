#include <stdio.h>;
#include <stdlib.h>;

int main() {

    int num;

    printf("Digite um valor:");
    scanf("%i", &num); 

     for(int linha = 0; linha <= num; linha++) {
        if(linha == 0 || linha == num) {
            printf("O");

            for(int coluna = 1; coluna <= num; coluna++) {
                printf("-");
            }

            printf("O");
        } else {
            printf("-");

            for(int coluna = 1; coluna <= num; coluna++) {
                printf(" ");
            }

            printf("-");
        }

        printf("\n");
     }


    return 0;
}