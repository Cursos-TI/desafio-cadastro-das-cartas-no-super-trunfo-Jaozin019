#include <stdio.h>

int main() {
    char estado1[30], estado2[30];
    char codigo1[4], codigo2[4];
    char nomedacidade1[50], nomedacidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float dens1, dens2;
    float pib_pc1, pib_pc2;
    float inv_dens1, inv_dens2;
    float super_poder1, super_poder2;

    int win_pop, win_area, win_pib, win_pts, win_dens, win_pibpc, win_sp;

printf("==== Desafio Cartas Super Trunfo ====\n");

    // Entrada Carta 1
    printf("==== Primeira Carta ====\n");
    printf("Estado (A-H): ");      scanf("%s", estado1);
    printf("Codigo (e.g. A01): ");  scanf("%s", codigo1);
    printf("Cidade: ");             scanf("%s", nomedacidade1);
    printf("Populacao: ");          scanf("%lu", &populacao1);
    printf("Area (km2): ");         scanf("%f", &area1);
    printf("PIB: ");                scanf("%f", &pib1);
    printf("Pontos Turisticos: ");  scanf("%d", &pontos1);

    // Cálculos Carta 1
    dens1        = populacao1 / area1;
    pib_pc1      = pib1 / populacao1;
    inv_dens1    = 1.0f / dens1;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_pc1 + inv_dens1;

    // Entrada Carta 2
    printf("\n==== Segunda Carta ====\n");
    printf("Estado (A-H): ");      scanf("%s", estado2);
    printf("Codigo (e.g. A01): ");  scanf("%s", codigo2);
    printf("Cidade: ");             scanf("%s", nomedacidade2);
    printf("Populacao: ");          scanf("%lu", &populacao2);
    printf("Area (km2): ");         scanf("%f", &area2);
    printf("PIB: ");                scanf("%f", &pib2);
    printf("Pontos Turisticos: ");  scanf("%d", &pontos2);

    // Cálculos Carta 2
    dens2        = populacao2 / area2;
    pib_pc2      = pib2 / populacao2;
    inv_dens2    = 1.0f / dens2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_pc2 + inv_dens2;

    // Comparações 
    win_pop   = (populacao1   > populacao2)   ? 1 : 0;
    win_area  = (area1        > area2)        ? 1 : 0;
    win_pib   = (pib1         > pib2)         ? 1 : 0;
    win_pts   = (pontos1      > pontos2)      ? 1 : 0;
    win_dens  = (dens1        < dens2)        ? 1 : 0; 
    win_pibpc = (pib_pc1      > pib_pc2)      ? 1 : 0;
    win_sp    = (super_poder1 > super_poder2) ? 1 : 0;

    // Saída de resultados 
    printf("\n==== Comparacao de Atributos ====\n");
    printf("Populacao         : Carta %d vence\n", win_pop + 1);
    printf("Area              : Carta %d vence\n", win_area + 1);
    printf("PIB               : Carta %d vence\n", win_pib + 1);
    printf("Pontos Turisticos : Carta %d vence\n", win_pts + 1);
    printf("Densidade Pop     : Carta %d vence\n", win_dens + 1);
    printf("PIB per Capita    : Carta %d vence\n", win_pibpc + 1);
    printf("Super Poder       : Carta %d vence\n", win_sp + 1);

    return 0;
}
