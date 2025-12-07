#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char estado[20];
    char codigo[20];
    char cidade[20];
    double area;
    double pib;
    double densidade;
    double pibcapita;
    int populacao;
    int pontos_turisticos;
    int escolhacarta;
    double resultado;
} Carta;



int main() {
    Carta c1, c2;
    int opcao;

    //zerando os resultados dos atributos
    c1.resultado = 0;
    c2.resultado = 0;

    //Tela de Boas Vindas
    printf("==========================================\n");
    printf("         SUPER TRUNFO - CIDADES \n");
    printf("==========================================\n");
    printf("\nBem-vindo ao jogo Super Trunfo de Países!\n");
    printf("Neste jogo, você vai cadastrar duas cartas\n");
    printf("com informações sobre cidades.\n");

    //Cadastro da Primeira Carta
    printf("Cadastro da Carta 1\n");
    printf("Nome do Estado: ");
    scanf("%s", &c1.estado);

    printf("Crie um Código para sua carta: ");
    scanf("%s", &c1.codigo);

    printf("Digite a CIdae: ");
    scanf("%s", &c1.cidade);

    printf("Digite o Número de Habitantes: ");
    scanf("%d", &c1.populacao);

    printf("Digite a Área: ");
    scanf("%lf", &c1.area);

    printf("Digite o Pib da Cidade: ");
    scanf("%lf", &c1.pib);

    printf("Digite os Pontos turísticos da Cidade: ");
    scanf("%d", &c1.pontos_turisticos);
    //Fim do cadastro da primeira carta

    printf("\n");

    //Cadastro da Segunda Carta
    printf("Cadastro da Carta 2\n");
    printf("Nome do Estado: ");
    scanf("%s", &c2.estado);

    printf("Crie um Código para sua carta: ");
    scanf("%s", &c2.codigo);

    printf("Digite a CIdae: ");
    scanf("%s", &c2.cidade);

    printf("Digite o Número de Habitantes: ");
    scanf("%d", &c2.populacao);

    printf("Digite a Área: ");
    scanf("%lf", &c2.area);

    printf("Digite o Pib da Cidade: ");
    scanf("%lf", &c2.pib);

    printf("Digite os Pontos turísticos da Cidade: ");
    scanf("%d", &c2.pontos_turisticos);
    //Fim do cadastro da segudna carta


    //Densidade e Pib Percapita da cidade 1
    c1.densidade = c1.populacao / c1.area;
    c1.pibcapita = (c1.pib * 1000000000) / c1.populacao;

        //Densidade e Pib Percapita da cidade 2
    c2.densidade = c2.populacao / c2.area;
    c2.pibcapita = (c2.pib * 1000000000) / c2.populacao;

    printf("\n");


    printf("Escolha o primeiro Atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade\n");
    printf("5 - PIB Per Capita\n");
    printf("6 - Pontos Turísticos\n");
    scanf("%d", &c1.escolhacarta);

    //garantir que ele escolheu uma opção válida  
    if (c1.escolhacarta < 1 || c1.escolhacarta > 6)
    {
        printf("Escolha uma opção válida!!!\n");
    }
    

    printf("\n");

    printf("Escolha o Segundo Atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade\n");
    printf("5 - PIB Per Capita\n");
    printf("6 - Pontos Turísticos\n");
    scanf("%d", &c2.escolhacarta);

    //garantir que ele escolheu uma opção válida  
    if (c2.escolhacarta < 1 || c2.escolhacarta > 6 || c1.escolhacarta == c2.escolhacarta)
    {
        printf("Escolha uma opção válida, ou atributo repetido!!!\n");
    }

    printf("\n");

    //comparação primeira atributo
    switch (c1.escolhacarta)
    {
    case 1:
        printf("População\n");
        printf("Carta 1 - %s %d\n", c1.cidade, c1.populacao);
        printf("Carta 2 - %s %d\n", c2.cidade, c2.populacao);
        c1.resultado = c1.populacao;
        c2.resultado = c2.populacao;
        break;
    
    case 2:
        printf("Área\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.area);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.area);
        c1.resultado = c1.area;
        c2.resultado = c2.area;
        break;
    
    case 3:
        printf("PIB\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.pib);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.pib);
        c1.resultado = c1.pib;
        c2.resultado = c2.pib;
        break;

    case 4:
        printf("Densidade\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.densidade);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.densidade);
        c1.resultado = c1.densidade;
        c2.resultado = c2.densidade;
        break;

    case 5:
        printf("PIB Per Capita\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.pibcapita);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.pibcapita);
        c1.resultado = c1.pibcapita;
        c2.resultado = c2.pibcapita;
        break;

    case 6:
        printf("Pontos Turísticos\n");
        printf("Carta 1 - %s %d\n", c1.cidade, c1.pontos_turisticos);
        printf("Carta 2 - %s %d\n", c2.cidade, c2.pontos_turisticos);
        c1.resultado = c1.pontos_turisticos;
        c2.resultado = c2.pontos_turisticos;
        break;

    }
        //comparação segundo atributo
        switch (c2.escolhacarta)
    {
    case 1:
        printf("População\n");
        printf("Carta 1 - %s %d\n", c1.cidade, c1.populacao);
        printf("Carta 2 - %s %d\n", c2.cidade, c2.populacao);
        c1.resultado += c1.populacao;
        c2.resultado += c2.populacao;
        break;
    
    case 2:
        printf("Área\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.area);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.area);
        c1.resultado += c1.area;
        c2.resultado += c2.area;
        break;
    
    case 3:
        printf("PIB\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.pib);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.pib);
        c1.resultado += c1.pib;
        c2.resultado += c2.pib;
        break;

    case 4:
        printf("Densidade\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.densidade);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.densidade);
        c1.resultado += (-c1.densidade);
        c2.resultado += (-c2.densidade);
        break;

    case 5:
        printf("PIB Per Capita\n");
        printf("Carta 1 - %s %lf\n", c1.cidade, c1.pibcapita);
        printf("Carta 2 - %s %lf\n", c2.cidade, c2.pibcapita);
        c1.resultado += c1.pibcapita;
        c2.resultado += c2.pibcapita;
        break;

    case 6:
        printf("Pontos Turísticos\n");
        printf("Carta 1 - %s %d\n", c1.cidade, c1.pontos_turisticos);
        printf("Carta 2 - %s %d\n", c2.cidade, c2.pontos_turisticos);
        c1.resultado += c1.pontos_turisticos;
        c2.resultado += c2.pontos_turisticos;
        break;
    }

    printf("\n");

        //resulado final
    printf("Soma dos Atributos!\n");
    printf("Carta 1 - %s, %lf\n", c1.cidade, c1.resultado);
    printf("Carta 2 - %s,  %lf\n", c2.cidade, c2.resultado);

    printf("\n");   

    //vencedor ou empate dos atributos
    printf("Resultado: ");
    if (c1.resultado > c2.resultado)
    {
        printf("\n Vencedor: %s \n", c1.cidade);
    } else if (c2.resultado > c1.resultado) {
        printf("\n Vencedor: %s \n", c2.cidade);
    } else {
        printf("\n Empate! \n");
    }
    

}