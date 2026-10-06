#include <stdio.h>
void torre(int n) {
    if (n > 0) {
        printf("DIREITA\n");
        torre(n - 1);
    }
}
//bispo
void bispo(int n) {
    if (n > 0) {
        printf("CimaDireita\n");
        bispo(n - 1);
    }
}
void rainha(int n) {
    if (n > 0) {
        printf("ESQUERDA\n");
        rainha(n - 1);
    }
}
int main() {
    int n = 5;
    printf("Movimentos da Torre:\n");
    torre(n);
    printf("\n------------------\n");
    printf("Movimentos do Bispo:\n");
    bispo(n);
    printf("\n------------------\n");
    printf("Movimentos da Rainha:\n");
    rainha(n);
    printf("\n------------------\n");
    printf("Movimentos do Cavalo:\n");


    for(int i =0; i < 2; i++) {
        printf("CIMA\n");
        if (i == 1) {
            printf("DIREITA\n");
        
        }
    }   

return 0;
}