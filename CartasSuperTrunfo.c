#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para a primeira cidade
    char codigo1[3], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Variáveis para a segunda cidade
    char codigo2[3], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // PRIMEIRA CIDADE
    printf("Digite o código da primeira carta (ex: A01):\n");
    scanf("%s",&codigo1);
    getchar(); 

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s",&nome_cidade1);

    printf("Digite a população da primeira cidade:\n");
    scanf("%d",&populacao1);

    printf("Digite a área da primeira cidade: \n");
    scanf("%f",&area1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f",&pib1);

    printf("Digite quantos pontos turísticos tem na primeira cidade: \n");
    scanf("%d",&pontos_turisticos1);

    // SEGUNDA CIDADE
    printf("Digite o código da segunda carta (ex: A01):\n");
    scanf("%s",&codigo2);

    printf("Digite o nome da segunda cidade:\n");
    scanf("%s",&nome_cidade2);

    printf("Digite a população da segunda cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a área da segunda cidade: \n");
    scanf("%f",&area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f",&pib2);

    printf("Digite quantos pontos turísticos tem na segunda cidade: \n");
    scanf("%d",&pontos_turisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // CIDADE 01
    printf("Cidade 01 \n");
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",nome_cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %f \n",area1);
    printf("PIB: %f \n",pib1);
    printf("Pontos Turísticos: %d \n",pontos_turisticos1);
    printf("------------------------------- \n");

    // CIDADE 02
    printf("Cidade 02 \n");
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",nome_cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %f \n",area2);
    printf("PIB: %f \n",pib2);
    printf("Pontos Turísticos: %d \n",pontos_turisticos2);

    return 0;
}
