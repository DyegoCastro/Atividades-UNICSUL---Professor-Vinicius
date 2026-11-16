
#include <stdio.h>

void exibirCabecalho(void){
    int pontuacao[10];
    printf("========RANK LAB========");
    printf("Digite 10 pontuações entre 0 e 100: ");
    scanf("%d", pontuacao);
}

void copiarVetor(int origem[], int
destino[], int n){
    
}

void exibirVetor(int v[], int n){
 int i;
 
 for(i=0;i<n;i++){
     printf("%d  ", v[i]);
     printf("\n");
 }
}


void selectionSort(int v[], int n){
    int j, i, posicaoMenor, auxiliar;
    
    for(i=0;i<n-1;i++){
        posicaoMenor=i;
        
        for(j=i+1;j<n;j++){
            if(v[posicaoMenor]>v[j]){
                posicaoMenor=j;
                
            }
        }
        auxiliar=v[i];
        v[i]=v[posicaoMenor];
        v[posicaoMenor]=auxiliar;
    }
}