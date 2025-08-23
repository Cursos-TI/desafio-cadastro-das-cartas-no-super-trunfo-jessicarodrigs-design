#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Dados Carta 1
char estado1;
char codigo1[4];
char nomecidade1[20];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

//Dados Carta 2
char estado2;
char codigo2[4];
char nomecidade2[20];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

//Leitura Carta 1
printf("\nCarta 1: \n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);

printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomecidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (em km²): ");
scanf("%f", &area1);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Pontos Turisticos: ");
scanf("%d", &pontosturisticos1);

//Leitura Carta 2
printf("\nCarta 2: \n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);

printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomecidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Pontos Turisticos: ");
scanf("%d", &pontosturisticos2);

//Exibição Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Área (em km²): %2f\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontosturisticos1);

//Exibição Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área (em km²): %2f\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontosturisticos2);



    return 0;
}
