
#include <stdio.h>
#include <math.h>
int main() {
int participante, jogadortime, computadores;
float potencia, duracao, precokwh, precokit, outroscustos;
int quantidadetimes;
float consumoenergia, custoenergia, custoalimentacao, custototal, custoparticipante;
printf("Quantos participantes: ");
scanf("%d", &participante);
printf("Quantos jogadores por times: ");
scanf("%d", &jogadortime);
printf("Quantos computadores: ");
scanf("%d", &computadores);
printf("Potencia media de cada computador (W): ");
scanf("%f", &potencia);
printf("Duracao do evento (horas): ");
scanf("%f", &duracao);
printf("Preco de 1 kWh de energia (R$): ");
scanf("%f", &precokwh);
printf("Preco do kit de alimentacao por participante (R$): ");
scanf("%f", &precokit);
printf("Outros custos do evento (R$): ");
scanf("%f", &outroscustos);
//calculos
quantidadetimes = (int) ceil((float) participante / jogadortime);
consumoenergia = (computadores * potencia * duracao)/1000;
custoenergia = consumoenergia * precokwh;
custoalimentacao = participante * precokit;
custototal = custoenergia + custoalimentacao + outroscustos;
custoparticipante = custototal / participante;
printf("============ARENA TECH============\n");
printf("Participantes: %d\n", participante);
printf("Times necessarios: %d\n", quantidadetimes);
printf("Consumo estimado: %.2f kWh\n", consumoenergia);
printf("Custo da energia: R$ %.2f\n", custoenergia);
printf("Custo da alimentacao: R$ %.2f\n", custoalimentacao);
printf("Outros custos: R$ %.2f\n", outroscustos);
printf("CUSTO TOTAL: R$ %.2f\n", custototal);
printf("CUSTO POR PARTICIPANTE: R$ %.2f\n", custoparticipante);
printf("=================================");
return 0;
}