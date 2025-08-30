#include <stdio.h>

// Função para obter valores de acordo com atributo escolhido
float getValor(int atributo, int carta,
               unsigned long populacao1, unsigned long populacao2,
               float area1, float area2,
               float pib1, float pib2,
               int pontos1, int pontos2,
               float dens1, float dens2,
               float percap1, float percap2,
               float poder1, float poder2) {
    switch (atributo) {
        case 1: return (carta == 1) ? populacao1 : populacao2;
        case 2: return (carta == 1) ? area1 : area2;
        case 3: return (carta == 1) ? pib1 : pib2;
        case 4: return (carta == 1) ? pontos1 : pontos2;
        case 5: return (carta == 1) ? dens1 : dens2;
        case 6: return (carta == 1) ? percap1 : percap2;
        case 7: return (carta == 1) ? poder1 : poder2;
        default: return 0;
    }
}

int main() {
//Dados Carta 1
char estado1;
char codigo1[4];
char nomecidade1[20];
unsigned long int populacao1;
float area1;
float pib1;
int pontosturisticos1;
float densidade1;
float pibpercapita1;
float superpoder1;

//Dados Carta 2
char estado2;
char codigo2[4];
char nomecidade2[20];
unsigned long int populacao2;
float area2;
float pib2;
int pontosturisticos2;
float densidade2;
float pibpercapita2;
float superpoder2;

//Leitura Carta 1
printf("\nCarta 1: \n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);

printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomecidade1);

printf("População: ");
scanf("%lu", &populacao1);

printf("Área (em km²): ");
scanf("%f", &area1);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Pontos Turísticos: ");
scanf("%d", &pontosturisticos1);

//Calculo Carta 1
densidade1 = populacao1 / area1;
pibpercapita1 = (pib1 * 1000000000) / populacao1;
superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1;

//Leitura Carta 2
printf("\nCarta 2: \n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);

printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomecidade2);

printf("População: ");
scanf("%lu", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Pontos Turísticos: ");
scanf("%d", &pontosturisticos2);

//Calculo Carta 2
densidade2 = populacao2 / area2;
pibpercapita2 = (pib2 * 1000000000) / populacao2;
superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2;

//Exibição Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %lu\n", populacao1);
printf("Área (em km²): %.2f\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpercapita1);
printf("Super Poder: %.2f\n", superpoder1);

//Exibição Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %lu\n", populacao2);
printf("Área (em km²): %.2f\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpercapita2);
printf("Super Poder: %.2f\n", superpoder2);

//Comparação
printf("\nComparação de Cartas:\n");
printf("População: Sua Carta Venceu Aqui (%d)\n", populacao1 > populacao2);
printf("Área: Sua Carta Venceu Aqui (%d)\n", area1 > area2);
printf("PIB: Sua Carta Venceu Aqui (%d)\n", pib1 > pib2);
printf("Pontos Turísticos: Sua Carta Venceu Aqui (%d)\n", pontosturisticos1 > pontosturisticos2);
printf("Densidade Populacional: Sua Carta Venceu Aqui (%d)\n", densidade1 > densidade2);
printf("PIB per Capita: Sua Carta Venceu Aqui (%d)\n", pibpercapita1 > pibpercapita2);
printf("Super Poder: Sua Carta Venceu Aqui (%d)\n", superpoder1 > superpoder2);

//Comparação Final com a escolha de: População
printf("\nComparação Final por (População)\n");
printf("Carta 1 - %s(%c): %lu habitantes\n", nomecidade1, estado1, populacao1);
printf("Carta 2 - %s(%c): %lu habitantes\n", nomecidade2, estado2, populacao2);

if (populacao1 > populacao2){
    printf("Resultado: Carta 1(%s) venceu!\n", nomecidade1);
} else if (populacao2 > populacao1){
    printf("Resultado: Carta 2(%s) venceu!\n", nomecidade2);
} else {
    printf("Resultado: Empate!\n");
}

//Menu Interativo Switch
int escolha;
int atributo1, atributo2;
float valor1_carta1 = 0, valor1_carta2 = 0;
float valor2_carta1 = 0, valor2_carta2 = 0;
float soma1 = 0, soma2 = 0;

//MENU PARA O PRIMEIRO ATRIBUTO
printf("\nEscolha o primeiro atributo para comparação:\n");
printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB Per Capita\n7 - Super Poder\n");
scanf("%d", &atributo1);

//MENU DINÂMICO PARA O SEGUNDO ATRIBUTO
printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
for (int i = 1; i <=7; i++){
    if (i != atributo1) {
        switch(i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Populacional\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
            case 7: printf("7 - Super Poder\n"); break;
        }
    }
}
scanf("%d", &atributo2);

// Obter valores dos atributos
valor1_carta1 = getValor(atributo1, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontosturisticos1, pontosturisticos2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2);
valor1_carta2 = getValor(atributo1, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontosturisticos1, pontosturisticos2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2);
valor2_carta1 = getValor(atributo2, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontosturisticos1, pontosturisticos2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2);
valor2_carta2 = getValor(atributo2, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontosturisticos1, pontosturisticos2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2);

// Comparação individual com regra especial para densidade
int ponto1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
int ponto2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

// Soma dos atributos
soma1 = valor1_carta1 + valor2_carta1;
soma2 = valor1_carta2 + valor2_carta2;

// Exibição dos resultados
printf("\n--- RESULTADO DA COMPARAÇÃO AVANÇADA ---\n");
printf("Carta 1: %s\n", nomecidade1);
printf("Carta 2: %s\n", nomecidade2);
printf("Atributo %d: %.2f vs %.2f\n", atributo1, valor1_carta1, valor1_carta2);
printf("Atributo %d: %.2f vs %.2f\n", atributo2, valor2_carta1, valor2_carta2);
printf("Soma dos atributos:\n%s: %.2f\n%s: %.2f\n", nomecidade1, soma1, nomecidade2, soma2);

// Resultado final
if (soma1 == soma2) {
    printf("Resultado: Empate!\n");
} else {
    printf("Resultado: Vencedora: %s\n", (soma1 > soma2) ? nomecidade1 : nomecidade2);
}

//Menu simples com switch
printf("\nMENU DE COMPARAÇÃO\n");
printf("Escolha o atributo para comparar:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Populacional (menor vence)\n");
printf("6 - PIB per Capita\n");
printf("7 - Super Poder\n");
printf("Digite sua opção: ");
scanf("%d", &escolha);

//Switch
switch(escolha){
case 1:
    printf("\nPopulação:\n");
    printf("%s: %lu habitantes\n", nomecidade1, populacao1);
    printf("%s: %lu habitantes\n", nomecidade2, populacao2);
    if (populacao1 > populacao2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (populacao2 > populacao1)
        printf("Vencedora: %s\n", nomecidade2);
    else   
        printf("Empate!\n");
    break;

case 2: 
    printf("\nÁrea:\n");
    printf("%s: %.2f km²\n", nomecidade1, area1);
    printf("%s: %.2f km²\n", nomecidade2, area2);
    if (area1 > area2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (area2 > area1)
        printf("Vencedora: %s\n", nomecidade2);
    else   
        printf("Empate!\n");
    break;

case 3:
    printf("\nPIB:\n");
    printf("%s: %.2f bilhões\n", nomecidade1, pib1);
    printf("%s: %.2f bilhões\n", nomecidade2, pib2);
    if (pib1 > pib2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (pib2 > pib1)
        printf("Vencedora: %s\n", nomecidade2);
    else    
        printf("Empate!\n");
    break;

case 4:
    printf("\nPontos Turísticos:\n");
    printf("%s: %d\n", nomecidade1, pontosturisticos1);
    printf("%s: %d\n", nomecidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2)
        printf("Vencedora: %s\n", nomecidade1); 
    else if (pontosturisticos2 > pontosturisticos1)
        printf("Vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");
    break;

case 5:
    printf("\nDensidade Populacional:\n");
    printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
    printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
    if (densidade1 < densidade2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (densidade2 < densidade1)
        printf("Vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");
      break;

case 6:
    printf("\nPIB per Capita:\n");
    printf("%s: %.2f reais\n", nomecidade1, pibpercapita1);
    printf("%s: %.2f reais\n", nomecidade2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (pibpercapita2 > pibpercapita1)
        printf("Vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");
    break;

case 7:
    printf("\nSuper Poder:\n");
    printf("%s: %.2f\n", nomecidade1, superpoder1);
    printf("%s: %.2f\n", nomecidade2, superpoder2);
    if (superpoder1 > superpoder2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (superpoder2 > superpoder1)
        printf("Vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");
    break;

default:
    printf("Opção inválida. Tente novamente\n");
}


    return 0;
}
