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
    char codigo[n][4];
    char nome[n][50];
    int populacao[n];
    int area[n]; 
    double pib[n];
    int pontos_turisticos[n];

    // Cadastro das cidades
    for (int i = 0; i < n; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);

        printf("Código da cidade (ex: A01): ");
        scanf("%3s", codigo[i]);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome[i]); 

        printf("População (Não use . ou , como separador de milhar/milhão): ");
        scanf("%d", &populacao[i]);

        printf("Área (km² Não use . ou , como separador de milhar/milhão): ");
        scanf("%d", &area[i]);

        printf("PIB (em bilhões): ");
        scanf("%lf", &pib[i]);

        printf("Número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos[i]);
    }

    // Exibir os dados cadastrados
    printf("\n=== Cidades Cadastradas ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Código: %s\n", codigo[i]);
        printf("Nome: %s\n", nome[i]);
        printf("População: %d habitantes\n", populacao[i]);
        printf("Área: %d km²\n", area[i]);
        printf("PIB: %.2lf bilhões\n", pib[i]);
        printf("Pontos Turísticos: %d\n", pontos_turisticos[i]);
    }

    return 0;
}