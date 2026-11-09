
#include <stdio.h>

int main(void)
{
    int numero, i;
    FILE *arquivo;
    
    printf("Digite uma número inteiro: ");
    scanf("%d", &numero);
    
    arquivo = fopen("tabuada.txt", "w");
    
    if(arquivo == NULL){
        printf("não foi possível cria o arquivo.\n");
        return 1; 
    }
    for(i=0; i<=10;i++){
        fprintf(arquivo, "%d * %d = %d \n", numero, i, numero*i);
    }
    fclose(arquivo);
    
    printf("Tabuada gravada com sucesso!");
    return 0;
}