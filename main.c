// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável inteira para armazenar o primeiro número.
    int x;
    // Declara uma variável inteira para armazenar o segundo número.
    int y;

    // Solicita ao usuário que digite o primeiro número.
    printf("Digite o primeiro numero: ");
    // Lê o primeiro número e armazena na variável 'x'.
    scanf("%d", &x);

    // Solicita ao usuário que digite o segundo número.
    printf("Digite o segundo numero: ");
    // Lê o segundo número e armazena na variável 'y'.
    scanf("%d", &y);

    // Compara os dois números para determinar qual é o maior.
    if (x > y)
    {
        // Se 'x' for maior que 'y', exibe 'x' como o maior número.
        printf("O maior numero e: %d", x);
    }
    else
    {
        // Caso contrário, exibe 'y' como o maior número.
        printf("O maior numero e: %d", y);
    }
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0;
}
