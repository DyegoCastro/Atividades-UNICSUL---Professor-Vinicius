#include <stdio.h>

int main(void){
    float nota_um, nota_dois, media, frequencia;
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota_um);
    
    printf("\nDigite a sua segunda nota: ");
    scanf("%f", &nota_dois);
    
    printf("Qual a sua porcentagem de frequencia(0 - 100%): ");
    scanf("%f", &frequencia);
    
    media = (nota_um+nota_dois)/2;
    
    if (frequencia >= 75){
        
        if (media>=6){
        printf("Sua nota foi %.2f, está aprovado", media);
        }else{
        printf("Sua nota foi %.2f, está reprovado", media);
        }  
    }else{
        printf("reprovado por falta, %.2f", frequencia);
    }
    return 0;
}