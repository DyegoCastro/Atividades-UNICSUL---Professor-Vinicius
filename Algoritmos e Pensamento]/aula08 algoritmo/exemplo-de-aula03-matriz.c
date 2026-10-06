
#include <stdio.h>

int main()
{
    int vendas[3][4];
    int i , j;
    
    for(int i=0;i<3;i++){
        for(j=0; j<4;j++){
            printf("digite o valor do [%d] {%d}: ",i,j);
            scanf("%d", &vendas[i][j]);
        }
    }
     for(int i=0;i<3;i++){
        for(j=0; j<4;j++){
         printf("o valor da venda [%d] [%d] é: %d\n", i, j, vendas[i][j]);
        }
    }
    return 0;
}