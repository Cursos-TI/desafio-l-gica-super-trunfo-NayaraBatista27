#include <stdio.h>

int main() {
     //Variaveis que armazenam os valores da carta 1
    char estado;
    char cidade[50];
    int populacao, pontosTuristicos, codigo;
    float area, pib;

    //Variaveis que armazenam os valores da carta 2
    char estado2;
    char cidade2[50];
    int populacao2, pontosTuristicos2, codigo2;
    float area2, pib2;

    printf("\n\n*** Bem vindo(a) ao SUPER TRUNFO - CIDADES *** \n\n");
    printf("Começe registrando suas cartas:\n");

    //Recebendo os dados da carta 1
    printf("Qual a PRIMEIRA cidade? ");
    scanf("%s", cidade);

    printf("Qual a letra referente ao estado? ");
    scanf(" %c", &estado);

    printf("Qual o codigo postal dessa cidade? ");
    scanf("%d", &codigo);

    printf("Qual a população dessa cidade? ");
    scanf("%d", &populacao);

    printf("Qual o PIB? ");
    scanf("%f", &pib);

    printf("Qual a área total em km? ");
    scanf("%f", &area);

    printf("Quantos pontos turísticos possuem na cidade? ");
    scanf("%d", &pontosTuristicos);

    //Criando novos atributos para a carta 1
    float densidade = (float) populacao / area;
    float perCapta = (float) pib / populacao;

    //Exibindo os atributos e valores da carta1
    printf("\n ***** Carta 1 *****\n");
    printf(" Cidade: %s \n Estado: %c \n", cidade, estado);
    printf(" Código Postal: %c-0%d \n", estado, codigo);
    printf(" População: %d mil habitantes\n Área: %.2f km² \n PIB: %.2f bilhões de reais\n Quantidade de pontos turísticos: %d lugares para conhecer\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %f reais\n\n", populacao, area, pib, pontosTuristicos, densidade, perCapta);

    //Recebendo os dados da carta 2
    printf("Qual a SEGUNDA cidade? ");
    scanf("%s", cidade2);

    printf("Qual a letra referente ao estado? ");
    scanf(" %c", &estado2);

    printf("Qual o codigo postal dessa cidade? ");
    scanf("%d", &codigo2);

    printf("Qual a população dessa cidade? ");
    scanf("%d", &populacao2);

    printf("Qual o PIB? ");
    scanf("%f", &pib2);

    printf("Qual a área total em km? ");
    scanf("%f", &area2);

    printf("Quantos pontos turísticos possuem na cidade? ");
    scanf("%d", &pontosTuristicos2);

    //Criando novos atributos para a carta 2
    float densidade2 = (float) populacao2 / area2;
    float perCapta2 = (float) pib2 / populacao2;

    //Exibindo os atributos e valores da carta2
    printf("\n ***** Carta 2 *****\n");
    printf(" Cidade: %s \n Estado: %c \n", cidade2, estado2);
    printf(" Código Postal: %c-0%d \n", estado2, codigo2);
    printf(" População: %d mil habitantes\n Área: %.2f km² \n PIB: %.2f bilhões de reais\n Quantidade de pontos turísticos: %d lugares para conhecer\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %f reais\n\n", populacao2, area2, pib2, pontosTuristicos2, densidade2, perCapta2);
    
    // variavel que escolhe o atributo a ser comparado
    int comparacao;

    printf("\nQual atributo será usado para comparar as cartas? \n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    scanf("%d", &comparacao);

    printf("\nBatalha entre: %s X %s \n", cidade, cidade2);

    switch(comparacao){
        // se o atributo escolhido for população
        case 1 :
            if(populacao > populacao2){
                printf("A carta vencedora foi: *** Carta 1 - %s *** com maior População\n\n", cidade);
                printf("Comparando o atributo -- População -- \n");
                printf("%s tem %d habitantes  /  %s tem %d habitantes\n\n", cidade, populacao, cidade2, populacao2);
            } else if(populacao2 > populacao){
                printf("A carta vencedora foi: *** Carta 2 - %s *** com maior População\n\n", cidade2);
                printf("Comparando o atributo -- População -- \n");
                printf("%s tem %d habitantes  /  %s tem %d habitantes\n\n", cidade2, populacao2, cidade, populacao);
            }else{
                printf("*** Empate ***");
                printf("Comparando o atributo -- População -- \n");
                printf("%s tem %d habitantes  /  %s tem %d habitantes\n\n", cidade, populacao, cidade2, populacao2);
            }
        break;
        // se o atributo escolhido for area
        case 2 :
            if(area > area2){
                printf("A carta vencedora foi: *** Carta 1 - %s *** com maior Àrea em km²\n\n", cidade);
                printf("Comparando o atributo -- Área -- \n");
                printf("%s tem %f km²  /  %s tem %f km² \n\n", cidade, area, cidade2, area2);
            } else if(area2 > area){
                printf("A carta vencedora foi: *** Carta 2 - %s *** com maior Árear em km²\n\n", cidade2);
                printf("Comparando o atributo -- Área -- \n");
                printf("%s tem %f km²  /  %s tem %f km²\n\n", cidade2, area2, cidade, area);
            }else{
                printf("*** Empate ***");
                printf("Comparando o atributo -- Área -- \n");
                printf("%s tem %f km²  /  %s tem %f km²\n\n", cidade, area, cidade2, area2);
            }
        break;
        // se o atributo escolhido for pib
        case 3:
            if(pib > pib2){
                printf("A carta vencedora foi: *** Carta 1 - %s *** com maior PIB\n\n", cidade);
                printf("Comparando o atributo -- PIB -- \n");
                printf("%s tem %f  bilhões de reais  /  %s tem %f  bilhões de reais \n\n", cidade, pib, cidade2, pib2);
            } else if(pib2 > pib){
                printf("A carta vencedora foi: *** Carta 2 - %s *** com maior PIB\n\n", cidade2);
                printf("Comparando o atributo -- PIB -- \n");
                printf("%s tem %f  bilhões de reais  /  %s tem %f  bilhões de reais\n\n", cidade2, pib2, cidade, pib);
            }else{
                printf("*** Empate ***");
                printf("Comparando o atributo -- PIB -- \n");
                printf("%s tem %f  bilhões de reais  /  %s tem %f  bilhões de reais\n\n", cidade, pib, cidade2, pib2);
            }
        break;
        // se o atributo escolhido for pontos turísticos
        case 4 :
            if(pontosTuristicos > pontosTuristicos2){
                printf("A carta vencedora foi: *** Carta 1 - %s *** com maior número de pontos turísticos para se visitar\n\n", cidade);
                printf("Comparando o atributo -- Pontos Turísticos -- \n");
                printf("%s tem %d  pontos turísticos  /  %s tem %d  pontos turísticos \n\n", cidade, pontosTuristicos, cidade2, pontosTuristicos2);
            } else if(pontosTuristicos2 > pontosTuristicos){
                printf("A carta vencedora foi: *** Carta 2 - %s *** com maior número de pontos turísticos para se visitar\n\n", cidade2);
                printf("Comparando o atributo -- Pontos Turísticos -- \n");
                printf("%s tem %d  pontos turísticos  /  %s tem %d pontos turísticos\n\n", cidade2, pontosTuristicos2, cidade, pontosTuristicos);
            }else{
                printf("*** Empate ***");
                printf("Comparando o atributo -- Pontos turísticos -- \n");
                printf("%s tem %d  pontos turísticos  /  %s tem %d  pontos turísticos\n\n", cidade, pontosTuristicos, cidade2, pontosTuristicos2);
            }
        break;
        // se o atributo escolhido for densidade populacional
        case 5 :
            if(densidade < densidade2){
                printf("A carta vencedora foi: *** Carta 1 - %s *** com o menor número de habitantes por km²\n\n", cidade);
                printf("Comparando o atributo -- Densidade demográfica -- \n");
                printf("%s tem %.2f mil habitantes por km²  /  %s tem %.2f mil habitantes por km² \n\n", cidade, densidade, cidade2, densidade2);
            } else if(densidade2 < densidade){
                printf("A carta vencedora foi: *** Carta 2 - %s *** com o menor número de habitantes por km²\n\n", cidade2);
                printf("Comparando o atributo -- Densidade demográfica -- \n");
                printf("%s tem %.2f mil habitantes por km²  /  %s tem %.2f mil habitantes por km²\n\n", cidade2, densidade2, cidade, densidade);
            }else{
                printf("*** Empate ***");
                printf("Comparando o atributo -- Densidade demográfica -- \n");
                printf("%s tem %.2f mil habitantes por km²  /  %s tem %.2f mil habitantes por km²\n\n", cidade, densidade, cidade2, densidade2);
            }
        break;
        // se o atributo escolhido for uma opção inválida
        default:
        printf("Você escolheu uma opção inválida!");
        break;
    }
    return 0;
}
