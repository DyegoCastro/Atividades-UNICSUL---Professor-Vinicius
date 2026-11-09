
#include <stdio.h>

int main(void)
{
   
    FILE *arquivo;
    char linha[100];
    
  
    
    arquivo = fopen("tabuada.txt", "r");
    
    if(arquivo == NULL){
        printf("não foi possível ler o arquivo.\n");
        return 1; 
    }
    printf("conteúdo do arquivo: \n");
    
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
 
    fclose(arquivo);
    
    printf("Tabuada gravada com sucesso!");
    return 0;
}