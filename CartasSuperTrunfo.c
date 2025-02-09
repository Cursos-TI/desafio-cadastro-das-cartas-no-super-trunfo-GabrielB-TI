#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int codigo_da_cidade;
    char nome_da_cidade[20];
    float populacao;
    float area;
    float PIB;
    int turistico;

    printf("Digite o Codigo de Cidade:\n");
    scanf("%d", &codigo_da_cidade);
    printf("Codigo da Cidade: %d\n ", codigo_da_cidade);

    printf("Dige o Nome da Cidade:\n");
    scanf("%c", &nome_da_cidade);
    printf("Nome da Cidade: %c\n ", nome_da_cidade);

    printf("Numero Total da Populacao:\n");
    scanf("%f", &populacao);
    printf("Pupulaçao Total: %f\n ", populacao);

    printf("Digite a area total da sua cidade:\n");
    scanf("%f", &area);
    printf("Populaçao total de: %f\n ", area);

    printf("Digite o PIB total da Cidade:\n");
    scanf("%f", &PIB);
    printf("PIB Total de: %f\n ", PIB);

    printf("Digite a quantidade de pontos turisticos de cidade:\n");
    scanf("%d", turistico);
    printf("Pontos Turisticos: %d\n ", turistico);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
