#include <stdio.h>
int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
//definindo matiz
    int tabuleiro[10][10] = 
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0}

    }
    ;
    printf("Tabuleiro de Batalha Naval:\n");
    printf("   ");
    //imprimindo a linha de letras,aqui ela vai ler cada indice da array linha e imprimir a letra correspondente
    for (int k = 0; k < 10; k++) {
        printf("%c ", linha[k]);
    }
    printf("\n");
    //imprimindo o tabuleiro (vai ler a linha quando ela chegar ao indice 9, vai ler a proxima coluna)
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        //garantir que os números fiquem alinhados corretamente mesmo que os números possuam dois dígitos
        if(i<9) {
            printf(" ");
        }
        //permite que pelo menos 10 colunas sejas exibidas
        for (int j = 0; j < 10; j++) {
            for (int j = 3; j < 6; j++) {
                tabuleiro[3][j] = 3;
            }
            for (int i = 6; i < 9; i++) {
                tabuleiro[i][6] = 3;
            }
            for (int j =0; j < 3; j++) { 
                tabuleiro[j][j] = 3;
            }
            for (int i = 0; i < 3 ; i++) {
                tabuleiro[i][9 - i] = 3;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}