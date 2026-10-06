/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float salario[4] ={0};
  
    for(int i = 0; i <4; i++){
        printf("Digite o salário do %d° funcionário: ",i+1 ,  salario[i]);
        scanf("%f", &salario[i]);
    }
    for(int i = 0; i <4; i++){
        printf("Funcionário %d: %.2f\n", i+1, salario[i]);
    }
  
    return 0;
}