#include <stdio.h>

int main() {

    //váriaveis carta 1//

    char estado1 [20];
    int codigo1, populacao1, area1, point1;
    char nomedacidade1 [30];
    float PIB1;

//váriaveis carta 2//
    char estado2 [20];
    int codigo2, populacao2, area2, point2;
    char nomedacidade2 [30];
    float PIB2;


//Adição de dados carta 1 
    printf("Carta 1: \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("código: \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("informe a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%d", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &point1);


// adição de dados carta 2 
    printf("Carta 2: \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("código: \n");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("informe a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%d", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &point2);

    //print das respostas no terminal carta 01 //
    printf("CARTA 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %d \n", codigo1);
    printf("Cidade: %s \n", nomedacidade1);
    printf("população: %d \n", populacao1);
    printf("Área: %dKM² \n", area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Pontos turísticos: %d \n", point1);

    //print das respostas no terminal carta 01 //

    printf("CARTA 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %d \n", codigo2);
    printf("Cidade: %s \n", nomedacidade2);
    printf("população: %d \n", populacao2);
    printf("Área: %dKM² \n", area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Pontos turísticos: %d \n", point2);

    return 0;
}
