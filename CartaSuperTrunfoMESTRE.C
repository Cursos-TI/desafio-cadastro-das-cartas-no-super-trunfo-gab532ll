#include <stdio.h>

    int main(){

//váriaveis carta 
        char estado1 [20];
        int codigo1, area1, point1;
        unsigned long int populacao1;
        char nomedacidade1 [30];
        float PIB1, densidade1, PIBPERC1;
        float SUPERPODER1;


//váriaveis carta 2
        char estado2 [20];
        int codigo2, area2, point2;
        unsigned long int populacao2;
        char nomedacidade2 [30];
        float PIB2, densidade2, PIBPERC2;
        float SUPERPODER2;

    
//Adição de dados carta 1 
        printf("Carta 1: \n");
    
        printf("Digite o estado: \n");
        scanf("%s", &estado1);

        printf("código: \n");
        scanf("%d", &codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nomedacidade1);

        printf("informe a população: \n");
        scanf("%u", &populacao1);

        printf("Digite a área: \n");
        scanf("%d", &area1);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB1);

        printf("Digite os pontos turísticos: \n");
        scanf("%d", &point1);

    //cálculo da densidade populacional, PIB PER CAPITA e superpoder01
    densidade1 = (float) populacao1 / area1;
    PIBPERC1 = (float) PIB1 / populacao1;
    SUPERPODER1 = (float) (populacao1 + area1 + PIB1 + point1 - densidade1);

    


    // adição de dados carta 2 
        printf("Carta 2: \n");
    
        printf("Digite o estado: \n");
        scanf("%s", &estado2);

        printf("código: \n");
        scanf("%d", &codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nomedacidade2);

        printf("informe a população: \n");
        scanf("%u", &populacao2);

        printf("Digite a área: \n");
        scanf("%d", &area2);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB2);

        printf("Digite os pontos turísticos: \n");
        scanf("%d", &point2);

 //cálculo da densidade populacional, PIB PER CAPITA e superpoder01
      densidade2 = (float) populacao2 / area2;
      PIBPERC2 = (float) PIB2 / populacao2;
      SUPERPODER2 = (float) (populacao2 + area2 + PIB2 + point2 - densidade2);


//print das respostas no terminal carta 01 //
        printf("CARTA 01: \n");
        printf("Estado: %s \n", estado1);
        printf("Código: %d \n", codigo1);
        printf("Cidade: %s \n", nomedacidade1);
        printf("população: %u \n", populacao1);
        printf("Área: %dKM² \n", area1);
        printf("PIB: %.2f bilhões de reais \n", PIB1);
        printf("Pontos turísticos: %d \n", point1);
        printf("Densidade populacional: %.2f hab/km² \n", densidade1);
        printf("O o Pib per capita é: %.2f REAIS\n", PIBPERC1);
        printf("O NÍVEL DE PODER É: %.2f\n\n", SUPERPODER1);

        //print das respostas no terminal carta 02 //

        printf("CARTA 02: \n");
        printf("Estado: %s \n", estado2);
        printf("Código: %d \n", codigo2);
        printf("Cidade: %s \n", nomedacidade2);
        printf("população: %d \n", populacao2);
        printf("Área: %dKM² \n", area2);
        printf("PIB: %.2f bilhões de reais \n", PIB2);
        printf("Pontos turísticos: %d \n", point2);
        printf("Densidade populacional: %.2f hab/km² \n", densidade2);
        printf("O o Pib per capita é: %.2f REAIS\n", PIBPERC2);
        printf("O NÍVEL DE PODER É: %.2f\n\n", SUPERPODER2);

        //comparação entre as cartas
        printf("*** comparação de cartas *** \n\n");

        float resultado1 = populacao1 > populacao2, resultado2 = area1 > area1, resultado3 = PIB1 > PIB2, resultado4 = densidade1 < densidade2, resultado5 = point1 > point2, resultado6 = SUPERPODER1 > SUPERPODER2, resultado7 = PIBPERC1 > PIBPERC2;
        
            printf("SE O RESUlTADO DA COMPARAÇÃO FOR 1 A CARTA 1 VENCE, SE NÃO A CARTA 2 VENCE \n\n");

            printf("RESULTADO POPULAÇÃO: %.0f\n", resultado1);
            printf("RESULTADO área: %.0f\n", resultado2);
            printf("RESULTADO PIB: %.0f\n", resultado3);
            printf("RESULTADO DENSIDADE: %.0f\n", resultado4);
            printf("RESULTADO PONTOS TURÍSTICOS: %.0f\n", resultado5);
            printf("O RESULTADO DO PIB PER CAPITA É: %0.f\n", resultado7);
            printf("O SUPER PODER VENCEDOR É: %.0f \n", resultado6);


        return 0;

    }