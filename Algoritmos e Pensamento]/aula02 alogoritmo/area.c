/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define pi 3.14159
int main(void)
{
    float area, raio;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("Area = %.2f \n", area);

    return 0;
}