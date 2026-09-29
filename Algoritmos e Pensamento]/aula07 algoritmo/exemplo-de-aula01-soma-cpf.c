#include <stdio.h>
 
 
 int main(void){
    double preco,total=0.0;
    char cpf[12];
 
 
 
    printf("CPF: ");
    scanf("%11s", cpf);
    do{ 
        printf("Digite o preço do produto ou 0 para finalizar: ");
        scanf("%lf", &preco);
        if(preco > 0){
            total+= preco;
        }
    }while(preco != 0);
   
    printf("Cpf: %s\n",cpf);
    printf("O valor final da compra foi: R$%.2lf", total);

 
    return 0;
 }