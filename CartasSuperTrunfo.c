#include <stdio.h>

int main() {
    //Declaração das variáveis
    char codigo[4]; //Codigo da cidade "A01"
    char nome[50];
    int população;
    float area;
    double pib;
    int pontos_turisticos;
    
    //introdução e cadastro das cartas
    printf("Desafio Super Trunfo - Paises\n");
    printf("Cadastro de Carta - Super Trunfo Paises\n");
    printf("Digite o codigo da cidade: (ex: A01): ");
    scanf("%3s", codigo);
    printf("Digite o nome da cidade: ");
    scanf (" %[^\n]", nome);  //lê uma string com espaços

    printf("Digite a população da cidade");
    scanf ("%d", &população);

    printf("Digite a área da cidade (km²)");
    scanf("%f", &area); 

    prinf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);  //lê o pib em bilhões

    printf("Digite o número de pontos turísticos: ");
    scanf("%d",  &pontos_turisticos);


    //dados
    printf("\nDados da carta cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d, habitantes\n", população);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.21f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);


    return 0;
}
