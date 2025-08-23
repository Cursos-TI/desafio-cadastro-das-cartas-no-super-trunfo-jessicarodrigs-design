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
char estado1 = 'A';
char codigo1[] = "A01";
char nomecidade1[] = "São Paulo";
int populacao1 = 12345;
float area1 = 132.54;
float pib1 = 45.54;
int pontosturisticos1 = 45;

//Dados Carta 2
char estado2 = 'B';
char codigo2[] = "B02";
char nomecidade2[] = "Rio de Janeiro";
int populacao2 = 12453;
float area2 = 145.55;
float pib2 = 50.25;
int pontosturisticos2 = 10;

//Exibição Carta 1
printf("Carta 1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Area: %2.f km²\n", area1);
printf("PIB: %2.f bilhoes de reis\n", pib1);
printf("Pontos Turisticos: %d\n", pontosturisticos1);

//Exibição Carta 2
printf("Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Area: %2.f km²\n", area2);
printf("PIB: %2.f bilhoes de reis\n", pib2);
printf("Pontos Turisticos: %d\n", pontosturisticos2);



    return 0;
}
