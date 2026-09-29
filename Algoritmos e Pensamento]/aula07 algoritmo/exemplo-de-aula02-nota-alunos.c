#include <stdio.h>
 
 
 int main(void){
    float nota, media, soma=0.0;
    int alunos, i;
   
    do{
        printf("Quantidade de alunos: ");
        scanf("%d", &alunos);
        if(alunos <=0){
            printf("Quantidade inválida!\n");
        }
    }while(alunos <= 0);
    
    for(i=1;i<=alunos;i++){
           do{
                printf("nota %d: ", i);
                scanf("%f", &nota);
                if(nota< 0 || nota>10){
                    printf("nota inválida!");
                 }
               
            }while(nota<0 || nota>10);
            
            soma+=nota;
    }
    
    media= soma/alunos;
    printf("A média da Turma é %.2f\n", media);
    return 0;
 }