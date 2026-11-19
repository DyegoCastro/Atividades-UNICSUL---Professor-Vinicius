
#include <stdio.h>

int main() {
    FILE *arquivo;
    FILE *relatorio;

    char local[100];
    char localMaior[100];

    float consumo, limite;
    float consumoTotal = 0.0;
    float maiorConsumo = 0.0;
    float consumoMedio;

    int quantidadeLocais = 0;
    int quantidadeAlertas = 0;
    int i;

    arquivo = fopen("consumo_campus.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir consumo_campus.txt\n");
        return 1;
    }

    while (fscanf(arquivo, "%99s %f %f",
                  local, &consumo, &limite) == 3) {

        quantidadeLocais++;
        consumoTotal += consumo;

        if (quantidadeLocais == 1 || consumo > maiorConsumo) {
            maiorConsumo = consumo;

            for (i = 0; local[i] != '\0'; i++) {
                localMaior[i] = local[i];
            }

            localMaior[i] = '\0';
        }

        if (consumo > limite) {
            quantidadeAlertas++;
        }
    }

    fclose(arquivo);

    if (quantidadeLocais > 0) {
        consumoMedio = consumoTotal / quantidadeLocais;
    } else {
        consumoMedio = 0.0;
    }

    relatorio = fopen("relatorio_consumo.txt", "w");

    if (relatorio == NULL) {
        printf("Erro ao criar relatorio_consumo.txt\n");
        return 1;
    }

    printf("========== ECOCAMPUS ==========\n");
    fprintf(relatorio, "========== ECOCAMPUS ==========\n");

    printf("Locais analisados: %d\n", quantidadeLocais);
    fprintf(relatorio, "Locais analisados: %d\n", quantidadeLocais);

    printf("Consumo total: %.2f litros\n", consumoTotal);
    fprintf(relatorio, "Consumo total: %.2f litros\n", consumoTotal);

    printf("Consumo medio: %.2f litros\n", consumoMedio);
    fprintf(relatorio, "Consumo medio: %.2f litros\n", consumoMedio);

    if (quantidadeLocais > 0) {
        printf("Maior consumo: %s - %.2f litros\n",
               localMaior, maiorConsumo);

        fprintf(relatorio, "Maior consumo: %s - %.2f litros\n",
                localMaior, maiorConsumo);
    } else {
        printf("Maior consumo: nenhum registro valido\n");
        fprintf(relatorio, "Maior consumo: nenhum registro valido\n");
    }

    printf("Locais em alerta: %d\n", quantidadeAlertas);
    fprintf(relatorio, "Locais em alerta: %d\n", quantidadeAlertas);

    printf("===============================\n");
    fprintf(relatorio, "===============================\n");

    fclose(relatorio);

    printf("\nRelatorio salvo em relatorio_consumo.txt\n");

    return 0;
}

