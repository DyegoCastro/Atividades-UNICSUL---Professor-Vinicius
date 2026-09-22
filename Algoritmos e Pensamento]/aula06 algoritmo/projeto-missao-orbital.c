
#include <stdio.h>

int main(void)
{
    int codigoCadete;
    int etapa;
    int pontos;
    int total;
    float media;
    int continuar;
    int contador;
    
    printf("Código do cadete: ");
    scanf("%d",&codigoCadete);
    
    do{
        printf("Código do cadete: ");
        scanf("%d",&codigoCadete);
    
         for(etapa=1;etapa<=3;etapa++){
            printf("Etapa %d: ", etapa);
             scanf("%d", &pontos);
      
         }while(pontos < 0 || pontos > 100){
    
             printf("Valor invalido! Digite uma pontuacao entre 0 e 100: "); 
             scanf("%d", &pontos);
         }
         total += pontos;
    }
    
    
    
    
    
    
    
    
    printf("Cadete:%d\n ",codigoCadete);
    printf("Pontuação Total: %d\n", total);
    
    return 0;
}