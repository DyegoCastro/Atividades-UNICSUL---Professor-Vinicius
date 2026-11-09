
#include <stdio.h>

int main(void)
{
    int quantidade, i;
    FILE *arquivo;
    char dia[10];
    float consumo;

    
    arquivo = fopen("consumo.txt", "a");
    
    if(arquivo == NULL){
        printf("não foi possível cria o arquivo.\n");
        return 1; 
    }
    
    printf("quantos registros deseja cadastra? ");
    scanf("%d", &quantidade);
    
    for(i=1;i<=quantidade ;i++){
        printf("\n Registro %d \n", i);
        printf("Dia: ");
        scanf("%9s", dia);
        printf("Consumo: ");
        scanf("%f", &consumo);
        
        fprintf(arquivo, "%s  %.2f\n", dia, consumo);
    }
    fclose(arquivo);
    
    printf("Consumo gravado com sucesso!");
    return 0;
}