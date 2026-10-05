#include <stdio.h>
 
int main() {

    int torre = 1;
    int bispo = 1;
    int cavalo = 1;
// TORRE
    while (torre <= 5)
    {
        printf("DIREITA\n", torre);
        torre++;
    }
// BISPO 
        printf("\n------------------\n");
    do
    {
        printf("CimaDireita\n",bispo);
        bispo++;

    }while (bispo <= 5);
        printf("\n------------------\n");
//RAINHA
    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("ESQUERDA\n", rainha);

    }
//CAVALO
        printf("\n------------------\n");
     for (cavalo = 1; cavalo <= 1; cavalo++)
    {
        while (cavalo <= 2)
        {
            printf("BAIXO\n", cavalo);
            cavalo++;
        }
        printf("ESQUERDA\n", cavalo);
        

    }
   

 
        
    
    
  
   
    return 0;
}

