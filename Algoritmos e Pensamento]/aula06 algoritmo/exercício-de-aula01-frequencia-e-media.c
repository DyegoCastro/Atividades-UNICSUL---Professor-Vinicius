
#include <stdio.h>

int main(void)
{
   float media1, media2, mediafinal, frequencia = 75;
   
   printf("Nota 1: ");
   scanf("%f", &media1);
   printf("Nota 2: ");
   scanf("%f", &media2);
   
   
   mediafinal = (media1+media2)/2;
    
    if(frequencia < 75.0){
        printf("Reprovado!");
    
    }else{
        if(mediafinal >=6.0){
            printf("Aprovado!");
        }else{
            printf("Reprovado por média");
        }
    }
   
    return 0;
}