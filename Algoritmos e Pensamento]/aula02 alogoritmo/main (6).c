
#include <stdio.h>


void exibirCabecalho(void);
void lerPontuacoes(int v[], int n);
void copiarVetor(int origem[], int destino[], int n);
void exibirVetor(int v[], int n);
int bubbleSort(int v[], int n);
int selectionSort(int v[], int n);
int insertionSort(int v[], int n);
int vetoresIguais(int a[], int b[], int n);



void exibirCabecalho(void) {

    printf("========== RANKLAB ==========\n");

}



void lerPontuacoes(int v[], int n) {

    int i;

    printf("Digite 10 pontuacoes entre 0 e 100:\n");

    for (i = 0; i < n; i++) {

        scanf("%d", &v[i]);

        while (v[i] < 0 || v[i] > 100) {

            printf("Valor invalido! Digite novamente: ");
            scanf("%d", &v[i]);

        }

    }

}



void copiarVetor(int origem[], int destino[], int n) {

    int i;

    for (i = 0; i < n; i++) {

        destino[i] = origem[i];

    }

}



void exibirVetor(int v[], int n) {

    int i;

    for (i = 0; i < n; i++) {

        printf("%d ", v[i]);

    }

    printf("\n");

}



int bubbleSort(int v[], int n) {

    int i, j;
    int temp;
    int comparacoes = 0;

    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - 1 - i; j++) {

            comparacoes++;

            if (v[j] > v[j + 1]) {

                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;

            }

        }

    }

    return comparacoes;

}



int selectionSort(int v[], int n) {

    int i, j;
    int menor;
    int temp;
    int comparacoes = 0;

    for (i = 0; i < n - 1; i++) {

        menor = i;

        for (j = i + 1; j < n; j++) {

            comparacoes++;

            if (v[j] < v[menor]) {

                menor = j;

            }

        }

        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;

    }

    return comparacoes;

}



int insertionSort(int v[], int n) {

    int i, j;
    int chave;
    int comparacoes = 0;

    for (i = 1; i < n; i++) {

        chave = v[i];
        j = i - 1;

        while (j >= 0) {

            comparacoes++;

            if (v[j] > chave) {

                v[j + 1] = v[j];
                j--;

            } else {

                break;

            }

        }

        v[j + 1] = chave;

    }

    return comparacoes;

}



int vetoresIguais(int a[], int b[], int n) {

    int i;

    for (i = 0; i < n; i++) {

        if (a[i] != b[i]) {

            return 0;

        }

    }

    return 1;

}



int main() {

    int pontuacoes[10];
    int bubble[10];
    int selection[10];
    int insertion[10];

    int compBubble;
    int compSelection;
    int compInsertion;

    float mediana;

    exibirCabecalho();

    lerPontuacoes(pontuacoes, 10);

    printf("Original: ");
    exibirVetor(pontuacoes, 10);

    copiarVetor(pontuacoes, bubble, 10);
    copiarVetor(pontuacoes, selection, 10);
    copiarVetor(pontuacoes, insertion, 10);

    compBubble = bubbleSort(bubble, 10);
    compSelection = selectionSort(selection, 10);
    compInsertion = insertionSort(insertion, 10);

    printf("Bubble: ");
    exibirVetor(bubble, 10);

    printf("Selection: ");
    exibirVetor(selection, 10);

    printf("Insertion: ");
    exibirVetor(insertion, 10);

    if (vetoresIguais(bubble, selection, 10) &&
        vetoresIguais(bubble, insertion, 10)) {

        printf("Resultados equivalentes: SIM\n");

    } else {

        printf("Resultados equivalentes: NAO\n");

    }

    mediana = (bubble[4] + bubble[5]) / 2.0;

    printf("Menor: %d | Maior: %d | Mediana: %.2f\n",
           bubble[0], bubble[9], mediana);

    printf("Comparacoes: Bubble %d | Selection %d | Insertion %d\n",
           compBubble, compSelection, compInsertion);

    printf("=============================\n");

    return 0;

}
