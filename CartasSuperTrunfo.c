#include <stdio.h>

int main() {

    char Estado[20];
    char codigo [20];
    char cidade [20];
    int População;
    int Turisticos;
    float Area;
    float Pib;

    printf("Carta 1 \n");
    printf("Estado: \n");
    scanf(" %s", Estado);

    printf("Código da Carta: \n");
    scanf(" %s", codigo);

    printf("Nome da cidade:\n");
    scanf(" %s", cidade);

     printf("População: \n");
     scanf("%d", &População);

     printf("Área em KM²: \n");
     scanf("%f", &Area);

     printf("Pib: \n");
     scanf("%f", &Pib);

     printf("Número de pontos turisticos: \n");
     scanf("%d", &Turisticos);

    printf("Carta 2 \n");
    printf("Estado: \n");
    scanf(" %s", Estado);

    printf("Código da Carta: \n");
    scanf(" %s", codigo);

    printf("Nome da cidade:\n");
    scanf(" %s", cidade);

     printf("População: \n");
     scanf(" %d", &População);

     printf("Área em KM²: \n");
     scanf("%f", &Area);

     printf("Pib: \n");
     scanf("%f", &Pib);

     printf("Número de pontos turisticos: \n");
     scanf("%d", &Turisticos);
    return 0;
}
