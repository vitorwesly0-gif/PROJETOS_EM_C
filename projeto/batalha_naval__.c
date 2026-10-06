#include <stdio.h>
int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
//definindo matiz
    int tabuleiro[10][10] = 
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0}

    }
    ;
    printf("Tabuleiro de Batalha Naval:\n");
    printf("   ");
    for (int k = 0; k < 10; k++) {
        printf("%c ", linha[k]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        if(i<9) {
            printf(" ");
        }
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}