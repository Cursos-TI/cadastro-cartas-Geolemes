#include <stdio.h>

int main() {

//===CARTA 01===
char estado01;
char codigo01[4];
char nomedacidade01[50];
int populacao01;
float area01;
float pib01;
int pontosturisticos01;

//===CARTA 02===

char estado02;
char codigo02[4];
char nomedacidade02[50];
int populacao02;
float area02;
float pib02;
int pontosturisticos02;

// === INSERÇÃO DE DADOS DA CARTA 01 ===
printf("=== CADASTRO DA CARTA 01 ===\n");

printf("Estado (A-H): ");
scanf(" %c", &estado01); // espaço antes do %c para consumir o ENTER

printf("Código (ex: A01): ");
scanf("%s", codigo01);

getchar(); // limpa buffer


printf("Nome da Cidade: ");
fgets(nomedacidade01, 50, stdin);

printf("População: ");
scanf("%d", &populacao01);

printf("Área (em km2): ");
scanf("%f", &area01);

printf("PIB: ");
scanf("%f", &pib01);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos01);

// === INSERÇÃO DE DADOS DA CARTA 02 ===
printf("\n=== CADASTRO DA CARTA 02 ===\n");

printf("Estado (A-H): ");
scanf(" %c", &estado02); // espaço antes do %c

printf("Código (ex: A01): ");
scanf("%s", codigo02);

getchar(); // limpa buffer


printf("Nome da Cidade: ");
fgets(nomedacidade02, 50, stdin);

printf("População: ");
scanf("%d", &populacao02);

printf("Área (em km2): ");
scanf("%f", &area02);

printf("PIB: ");
scanf("%f", &pib02);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos02);

// === EXIBINDO AS INFORMAÇÕES ===

printf("\n\n=== CARTA 01 ===\n");
printf("Estado: %c\n", estado01);
printf("Código: %s\n", codigo01);
printf("Nome da Cidade: %s", nomedacidade01);
printf("População: %d\n", populacao01);
printf("Área: %.2f km2\n", area01);
printf("PIB: %.2f bilhões de reais\n", pib01);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos01);


printf("\n\n=== CARTA 02 ===\n");
printf("Estado: %c\n", estado02);
printf("Código: %s\n", codigo02);
printf("Nome da Cidade: %s", nomedacidade02);
printf("População: %d\n", populacao02);
printf("Área: %.2f km2\n", area02);
printf("PIB: %.2f bilhões de reais\n", pib02);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos02);

return 0;
}