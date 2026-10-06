
#include <stdio.h>

int main()
{
  float valores[8];
  float soma = 0.0f;
  int  i = 0;
  int acimaMedia=0;
  float media;
  for(i=0;i<8; i++){
      printf("digite o valor do %d: ",i+1);
      scanf("%f", &valores[i]);
      soma += valores[i];
  }
  media = soma/8;
 
   for( i=0; i < 8;i++){
     if(valores[i] > media){
         acimaMedia++;
     }
  }
    printf("o valor da média é: %.2f\n", media);
    printf("Valores acima da média: %d", acimaMedia);
    return 0;
}