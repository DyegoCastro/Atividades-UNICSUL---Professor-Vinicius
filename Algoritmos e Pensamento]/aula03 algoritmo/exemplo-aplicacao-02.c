#include <stdio.h>
int main(){
    int quant_cafe;
    float total, preco;
    
    printf("Quantos cafés quer? ");
    scanf("%d", &quant_cafe);
    
    printf("Preço do cafe: ");
    scanf("%f", &preco);
    total= preco*quant_cafe;
    printf("Você comprou %d cafés, e o total deu R$%.2f",quant_cafe, total);
    return 0;
}