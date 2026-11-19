/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define pi 3.14159
int main()
{
    float raio, perimetro;
    printf("Qual a medida do raio (em cm)?");
    scanf("%f",&raio);
    
    perimetro = 2*pi*raio;
    
    printf("O perímetro da circunferência é %fcm", perimetro);

    return 0;
}