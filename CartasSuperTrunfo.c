#include <stdio.h>

#define MAX_CIDADES 100 // Limite máximo de cidades que podem ser cadastradas

int main() {
    int n; // Número de cidades a serem cadastradas

    // Solicita ao usuário a quantidade de cidades
    printf("Quantas cidades deseja cadastrar? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_CIDADES) {
        printf("Número inválido de cidades. O máximo permitido é %d.\n", MAX_CIDADES);
        return 1; // Sai do programa caso o número seja inválido
    }

    // Declaração dos vetores para armazenar as cidades
    char estado[n][50];         // Armazena o nome completo do estado
    char codigo[n][5];          // Código da carta (ex: "A01")
    char nome[n][50];           // Nome da cidade
    int populacao[n];           // População
    float area[n];              // Área em km²
    float pib[n];               // PIB
    int pontos_turisticos[n];   // Número de pontos turísticos

    // Cadastro das cidades
    for (int i = 0; i < n; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);

        printf("Nome do Estado: ");
        scanf(" %[^\n]", estado[i]);  // Lê o nome do estado

        printf("Código da cidade (ex: A01): ");
        scanf("%4s", codigo[i]); //lê o codigo da cidade

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome[i]); //lê o nome da cidade

        printf("População (Não use . ou , como separador de milhar/milhão): ");
        scanf("%d", &populacao[i]); //lê a populção da cidade

        printf("Área (em km² Não use . ou , como separador de milhar/milhão): ");
        scanf("%f", &area[i]); //lê a area da cidade

        printf("PIB (Não use . ou , como separador de milhar): ");
        scanf("%f", &pib[i]); //lê o pib da cidade

        printf("Número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos[i]); //lê o numero de pontos turisticos
    }

    // Exibir os dados cadastrados
    printf("\n=== Cidades Cadastradas ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Estado: %s\n", estado[i]);
        printf("Código: %s\n", codigo[i]);
        printf("Nome: %s\n", nome[i]);
        printf("População: %d habitantes\n", populacao[i]);
        printf("Área: %.f km²\n", area[i]);
        printf("PIB: %.f\n", pib[i]);
        printf("Pontos Turísticos: %d\n", pontos_turisticos[i]);
    }

    return 0;
}
