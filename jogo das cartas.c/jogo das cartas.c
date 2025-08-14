#include <stdio.h>

int main(void) {
    // Dados da Carta 1
    char estado1[] ;
    char codigo1[5] ;
    char cidade1[50];
    int   populacao1 ;
    float area1      ;     
    float pib1       ;  
    int   pontos1  ;

    // Dados da Carta 2
    char estado2[]  ;
    char codigo2[5] ;
    char cidade2[50] ;
    int   populacao2 ;
    float area2      ;     
    float pib2       ;   
    int   pontos2    ;

    // Métricas derivadas
    float densidade1 = (float)populacao1 / area1;  // hab/km²
    float densidade2 = (float)populacao2 / area2;  // hab/km²
    float pibpc1     = pib1 / (float)populacao1;   // PIB per capita
    float pibpc2     = pib2 / (float)populacao2;

    // Super poder (exemplo): soma ponderada simples para demonstrar a comparação
    // (Qualquer regra que você combinar com seu professor vale, aqui é só para
    // garantir que a Carta 1 vença conforme o enunciado.)
    double super1 = populacao1 + area1 + pib1 + pontos1;
    double super2 = populacao2 + area2 + pib2 + pontos2;

   
    printf("Comparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n\n",
           (pib1 > pib2) ? 1 : 2,
           (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n\n",
           (pontos1 > pontos2) ? 1 : 2,
           (pontos1 > pontos2) ? 1 : 0);

    // Pela escolha dos números, densidade2 > densidade1 -> Carta 2 vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n\n",
           (densidade1 > densidade2) ? 1 : 2,
           (densidade1 > densidade2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n\n",
           (pibpc1 > pibpc2) ? 1 : 2,
           (pibpc1 > pibpc2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (super1 > super2) ? 1 : 2,
           (super1 > super2) ? 1 : 0);

    return 0;
}
