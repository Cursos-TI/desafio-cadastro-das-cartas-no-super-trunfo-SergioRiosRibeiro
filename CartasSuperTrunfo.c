#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Sérgio

int main() {
    
    // Variáveis que guardam atributos das cidades.    
    char estado1;
    char codigoCarta1[3];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int nPontosTur1;

    char estado2;
    char codigoCarta2[3];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int nPontosTur2;
    
    // Cadastro das Cartas:
    // Função printf para solicitar e scanf para salvar entradas do usuário para cada atributo.
    printf("Bem vindo(a) ao: SUPER TRUNFO DE PAÍSES!\n");
    printf("Por favor, informe uma letra, entre A e H, para o estado do país: \n");
    scanf(" %c", &estado1);
    printf("Agora, por favor, informe o código da carta, sendo que ele deve ser composto de dois algarismos, indo de 01 a 04: \n");
    scanf("%s", &codigoCarta1);
    printf("Agora, por favor, informe o nome da cidade. O nome deve ser escrito todo junto, sem espaços: \n");
    scanf("%s", &nomeCidade1);
    printf("Agora, você precisa informar a população. O número deve ser escrito sem nenhum tipo de sinal ou pontuação: \n");
    scanf("%i", &populacao1);
    printf("Agora informe a área da cidade. Este é um número decimal, e a vírgula DEVE ser substituída por ponto: \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade. Assim como acima, o número é decimal, e como tal, a vírgula é substituída por ponto: \n");
    scanf("%f", &pib1);
    printf("Por último, informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%i", &nPontosTur1);

    printf("Você acaba de completar o cadastro de uma carta! Parabéns! Vamos cadastrar mais uma?\n");

    printf("Informe uma letra, entre A e H, para o estado do país: \n");
    scanf(" %c", &estado2);
    printf("Informe o código da carta, composto de dois algarismos, de 01 a 04: \n");
    scanf("%s", &codigoCarta2);
    printf("Agora, por favor, informe o nome da cidade. O nome deve ser escrito todo junto, sem espaços: \n");
    scanf("%s", &nomeCidade2);
    printf("Informe a população, sem nenhum tipo de sinal ou pontuação: \n");
    scanf("%i", &populacao2);
    printf("Informe a área da cidade. Esse é um decimal e precisa ter a vírgula substituída por ponto: \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade. Assim como acima, é um número decimal e...bem você já sabe. Só troque a vírgula pelo ponto: \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%i", &nPontosTur2);
    printf("\n");
    // Exibição dos Dados das Cartas:
    // Função printf exibindo informações das cartas, um atributo por linha.
    printf("Muito bem! Agora vamos conferir as duas cartas que você registrou? Vamos lá:\n");
    printf("\n");
    printf("Carta1:\n");
    printf("Estado %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %i \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos de Turísticos: %i \n", nPontosTur1);
    printf("\n");
    printf("Carta2:\n");
    printf("Estado %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %i \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos de Turísticos: %i \n", nPontosTur2);

    return 0;
}