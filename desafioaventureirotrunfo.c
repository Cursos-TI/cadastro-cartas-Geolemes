#include <stdio.h>
#include <string.h>

int main() {

//===CARTA 01===
char estado01;
char codigo01[4];
char nomedacidade01[50];
int populacao01;
float area01;
float pib01; // PIB em bilhões
int pontosturisticos01;
float pibpercapita01; // em reais
float densidadepopulacional01;

//===CARTA 02===
char estado02;
char codigo02[4];
char nomedacidade02[50];
int populacao02;
float area02;
float pib02; // PIB em bilhões
int pontosturisticos02;
float pibpercapita02; // em reais
float densidadepopulacional02;


// ===INSERÇÃO DE DADOS DA CARTA 01===

printf ("===CADASTRO DA CARTA 01===\n");

printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
scanf(" %c", &estado01);

printf("Letra do estado seguida de um número de 01 a 04 (ex: B02): ");
scanf("%3s", codigo01);

while (getchar() != '\n'); // limpa buffer

printf("Nome da Cidade: ");
fgets(nomedacidade01, 50, stdin);
nomedacidade01[strcspn(nomedacidade01, "\n")] = 0;

printf("População: ");
scanf("%d", &populacao01);

printf("Área (em km2): ");
scanf("%f", &area01);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib01);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos01);


// ===INSERÇÃO DE DADOS DA CARTA 02===

printf ("\n===CADASTRO DA CARTA 02===\n");

printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
scanf(" %c", &estado02);

printf("Letra do estado seguida de um número de 01 a 04 (ex: B02): ");
scanf("%3s", codigo02);

while (getchar() != '\n'); // limpa buffer

printf("Nome da Cidade: ");
fgets(nomedacidade02, 50, stdin);
nomedacidade02[strcspn(nomedacidade02, "\n")] = 0;

printf("População: ");
scanf("%d", &populacao02);

printf("Área (em km2): ");
scanf("%f", &area02);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib02);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos02);


// ===CÁLCULOS===

// densidade populacional
densidadepopulacional01 = (float) populacao01 / area01;
densidadepopulacional02 = (float) populacao02 / area02;

// PIB per capita (pib está em bilhões → converter para reais)
pibpercapita01 = (pib01 * 1000000000.0) / populacao01;
pibpercapita02 = (pib02 * 1000000000.0) / populacao02;


// ===EXIBINDO AS INFORMAÇÕES DAS CARTAS===

printf("\n\n=== CARTA 01 ===\n");
printf("Estado: %c\n", estado01);
printf("Código: %s\n", codigo01);
printf("Nome da Cidade: %s\n", nomedacidade01);
printf("População: %d\n", populacao01);
printf("Área: %.2f km2\n", area01);
printf("PIB: %.2f bilhões de reais\n", pib01);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos01);
printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional01);
printf("PIB Per Capita: R$ %.2f\n", pibpercapita01);


printf("\n\n=== CARTA 02 ===\n");
printf("Estado: %c\n", estado02);
printf("Código: %s\n", codigo02);
printf("Nome da Cidade: %s\n", nomedacidade02);
printf("População: %d\n", populacao02);
printf("Área: %.2f km2\n", area02);
printf("PIB: %.2f bilhões de reais\n", pib02);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos02);
printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional02);
printf("PIB Per Capita: R$ %.2f\n", pibpercapita02);

return 0;
}