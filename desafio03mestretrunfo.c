#include <stdio.h>
#include <string.h>

int main() {

//===CARTA 01===
char estado01;
char codigo01[4];
char nomedacidade01[50];
unsigned long int populacao01;
float area01;
float pib01; 
int pontosturisticos01;
float pibpercapita01;
float densidadepopulacional01;
float superpoder01;

//===CARTA 02===
char estado02;
char codigo02[4];
char nomedacidade02[50];
unsigned long int populacao02;
float area02;
float pib02;
int pontosturisticos02;
float pibpercapita02;
float densidadepopulacional02;
float superpoder02;


// ===INSERÇÃO DE DADOS DA CARTA 01===

printf ("===CADASTRO DA CARTA 01===\n");

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado01);

printf("Código (ex: B02): ");
scanf("%3s", codigo01);

while (getchar() != '\n');

printf("Nome da Cidade: ");
fgets(nomedacidade01, 50, stdin);
nomedacidade01[strcspn(nomedacidade01, "\n")] = 0;

printf("População: ");
scanf("%lu", &populacao01);

printf("Área (em km2): ");
scanf("%f", &area01);

printf("PIB (em bilhões): ");
scanf("%f", &pib01);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos01);


// ===INSERÇÃO DE DADOS DA CARTA 02===

printf ("\n===CADASTRO DA CARTA 02===\n");

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado02);

printf("Código (ex: B02): ");
scanf("%3s", codigo02);

while (getchar() != '\n');

printf("Nome da Cidade: ");
fgets(nomedacidade02, 50, stdin);
nomedacidade02[strcspn(nomedacidade02, "\n")] = 0;

printf("População: ");
scanf("%lu", &populacao02);

printf("Área (em km2): ");
scanf("%f", &area02);

printf("PIB (em bilhões): ");
scanf("%f", &pib02);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos02);


// ===CÁLCULOS===

// densidade populacional
densidadepopulacional01 = (float) populacao01 / area01;
densidadepopulacional02 = (float) populacao02 / area02;

// PIB per capita (convertendo PIB de bilhões para reais)
pibpercapita01 = (pib01 * 1000000000.0) / populacao01;
pibpercapita02 = (pib02 * 1000000000.0) / populacao02;

// SUPER PODER
superpoder01 = (float) populacao01
+ area01
+ (pib01 * 1000000000.0)
+ pontosturisticos01
+ pibpercapita01
+ (1.0 / densidadepopulacional01);

superpoder02 = (float) populacao02
+ area02
+ (pib02 * 1000000000.0)
+ pontosturisticos02
+ pibpercapita02
+ (1.0 / densidadepopulacional02);


// ===EXIBIÇÃO DAS CARTAS===

printf("\n\n=== CARTA 01 ===\n");
printf("Estado: %c\n", estado01);
printf("Código: %s\n", codigo01);
printf("Nome da Cidade: %s\n", nomedacidade01);
printf("População: %lu\n", populacao01);
printf("Área: %.2f km2\n", area01);
printf("PIB: %.2f bilhões de reais\n", pib01);
printf("Pontos Turísticos: %d\n", pontosturisticos01);
printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional01);
printf("PIB Per Capita: R$ %.2f\n", pibpercapita01);
printf("Super Poder: %.2f\n", superpoder01);


printf("\n\n=== CARTA 02 ===\n");
printf("Estado: %c\n", estado02);
printf("Código: %s\n", codigo02);
printf("Nome da Cidade: %s\n", nomedacidade02);
printf("População: %lu\n", populacao02);
printf("Área: %.2f km2\n", area02);
printf("PIB: %.2f bilhões de reais\n", pib02);
printf("Pontos Turísticos: %d\n", pontosturisticos02);
printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional02);
printf("PIB Per Capita: R$ %.2f\n", pibpercapita02);
printf("Super Poder: %.2f\n", superpoder02);


// === COMPARAÇÕES ===
// regra: densidade -> menor vence; resto -> maior vence

printf("\n\n=== COMPARAÇÃO ENTRE AS CARTAS ===\n");

printf("População: Carta %d venceu (%d)\n", 
(populacao01 > populacao02) ? 1 : 2,
(populacao01 > populacao02) ? 1 : 0);

printf("Área: Carta %d venceu (%d)\n", 
(area01 > area02) ? 1 : 2,
(area01 > area02) ? 1 : 0);

printf("PIB: Carta %d venceu (%d)\n", 
(pib01 > pib02) ? 1 : 2,
(pib01 > pib02) ? 1 : 0);

printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
(pontosturisticos01 > pontosturisticos02) ? 1 : 2,
(pontosturisticos01 > pontosturisticos02) ? 1 : 0);

printf("Densidade Populacional: Carta %d venceu (%d)\n", 
(densidadepopulacional01 < densidadepopulacional02) ? 1 : 2,
(densidadepopulacional01 < densidadepopulacional02) ? 1 : 0);

printf("PIB per Capita: Carta %d venceu (%d)\n", 
(pibpercapita01 > pibpercapita02) ? 1 : 2,
(pibpercapita01 > pibpercapita02) ? 1 : 0);

printf("Super Poder: Carta %d venceu (%d)\n", 
(superpoder01 > superpoder02) ? 1 : 2,
(superpoder01 > superpoder02) ? 1 : 0);


return 0;
}