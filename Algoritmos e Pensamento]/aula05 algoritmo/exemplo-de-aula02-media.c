#include <stdio.h>

int main(void){
    float nota_um, nota_dois, media;
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota_um);
    
    printf("\nDigite a sua segunda nota: ");
    scanf("%f", &nota_dois);
    
    media = (nota_um+nota_dois)/2;
    if (media>=6){
        printf("Sua nota foi %.2f, está aprovado", media);
    }else{
        printf("Sua nota foi %.2f, está reprovado", media);
    }
    return 0;
}