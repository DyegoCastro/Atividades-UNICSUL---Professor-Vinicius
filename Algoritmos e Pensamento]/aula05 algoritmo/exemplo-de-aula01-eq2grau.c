#include <stdio.h>
#include <math.h>

int main(void)
{
    float valor_a, valor_b, valor_c, delta, x_um, x_dois;
    
    printf("ax² + bx + c = 0 \n");
    
    printf("Digite o valor de A: ");
    scanf("%f", &valor_a);
    
    printf("Digite o valor de B: ");
    scanf("%f", &valor_b);
    
    printf("Digite o valor de C: ");
    scanf("%f", &valor_c);

    delta = (valor_b*valor_b)-(4*valor_a*valor_c);
    
    x_um = ((-valor_b)+sqrt(delta))/2*valor_a;

    x_dois = ((-valor_b)-sqrt(delta))/2*valor_a;
    
    printf("X1 = %.2f\n", x_um);
    printf("X2 = %.2f\n", x_dois);
    
    
    return 0;
    
}

