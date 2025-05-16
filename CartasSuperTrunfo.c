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

char pais1[30], pais2[30];
char codigo1[3], codigo2[3];
char nomedacidade1[50], nomedacidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;

// CARTA - 1 

printf("==== Desafio Super Trunfo - Países ====\n");
printf("==== Digite as Informacoes da Primeira Carta ====\n");

printf("Digite o Nome de um Pais, Países de (A-H):\n");
scanf("%s", &pais1);

printf("Digite o Codigo da Carta, (Ex: A01, A02).\n");
scanf("%s", &codigo1);

printf("Digite o Nome da Cidade.\n");
scanf("%s", &nomedacidade1);

printf("Digite o Numero da Populacao.\n");
scanf("%d", &populacao1);

printf("Digite a Area da Cidade em Km².\n");
scanf("%f", &area1);

printf("Digite o PIB da Cidade.\n");
scanf("%f", &pib1);

printf("Digite Quantos Pontos Turisticos a Cidade Possui.\n");
scanf("%d", &pontosturisticos1);

// INFORMACOES CARTA - 1

printf("==== IFORMACOES CARTA - 1 ====\n");

printf("Estado: %s\n", pais1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", nomedacidade1);
printf("Populacao: %d\n", populacao1);
printf("Area Km²: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Pontos Turisticos: %d\n", pontosturisticos1);

// CARTA - 2 

printf("==== Digite as informacoes da Carta 2 ==== \n");

    printf("Digite o nome de um Pais, Países de (A-H): \n");
    scanf("%s", &pais2);

    printf("Digite o codigo da carta (ex: A01, A02): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade. \n");
    scanf("%s", &nomedacidade2);

    printf("Digite o numero da populacao. \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km². \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade. \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos a cidade possui. \n");
    scanf("%d", &pontosturisticos2);

    //INFORMACOES CARTA 2

    printf("==== informacoes da Carta 2 ==== \n");

    printf("Estado: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);



    return 0;
}
