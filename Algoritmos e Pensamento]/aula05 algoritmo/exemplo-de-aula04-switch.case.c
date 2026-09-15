#include <stdio.h>

int main(void){
    char tipohospedagem;
    int quantidadediaria;
    float valordiaria, valortotal;
    printf("Qual o tipo de hospedagem (S-D-T): ");
    scanf("%c", &tipohospedagem);
    
    printf("Qual a quantidade de diarias: ");
    scanf("%d", &quantidadediaria);
    
    switch(tipohospedagem){
        case 'S':
        case 's':
            valordiaria = 300.0f;
            break;
        case 'D':
        case 'd':
            valordiaria = 450.0f;
            break;
        case 'T':
        case 't':
            valordiaria = 500.0f;
            break;
            
            default:
            printf("\nTipo invalido");
    }
    valortotal = valordiaria*quantidadediaria;
    printf("\n O valor total da hospedagem é R$%f",valortotal);
    return 0;
}