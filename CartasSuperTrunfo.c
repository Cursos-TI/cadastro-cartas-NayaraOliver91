#include <stdio.h>

int main() {
   // Declaração de variáveis para a Carta 1
   // char: armazena um único caractere ou cadeias de texto (strings)
    char estado1;
    char codigo1[4];// Vetor de 4 posições (3 caracteres + o terminador nulo '\0')
    char cidade1[50];// Espaço para nomes de cidades de até 49 caracteres
    int populacao1, pontos1;// Números inteiros
    float area1, pib1;// Números decimais (ponto flutuante)
  // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // --- ENTRADA DE DADOS (CARTA 1) ---
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    // O espaço antes de %c serve para ignorar o 'Enter' (\n) deixado no buffer
    scanf(" %c", &estado1); 

    printf("Código (ex: A01): ");
    scanf("%s", codigo1); // %s lê uma string (não precisa do & para vetores de char)

    printf("Nome da Cidade: ");
    // %[^\n] lê o texto incluindo espaços até que o usuário aperte Enter
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);// %d para números inteiros

    printf("Área (km²): ");
    scanf("%f", &area1);// %f para números decimais

    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

  // --- ENTRADA DE DADOS (CARTA 2) ---
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --- SAÍDA DE DADOS (EXIBIÇÃO) ---
    // printf: função para exibir dados no console
    printf("\n------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    // .2f limita a exibição a duas casas decimais
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);// Exibindo o dado capturado
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("------------------------------\n");

    return 0;// Indica que o programa terminou com sucesso
}