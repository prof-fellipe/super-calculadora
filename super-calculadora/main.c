#include <stdio.h>
#include <stdlib.h>

// Função que mostra os números pares de 1 até n e conta quantos são
void mostrarEContarParesDe1AteN(int n) {
    int contador = 0;
    printf("Numeros pares de 1 ate %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contador++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", contador);
}

int main()
{
    int op = 0;

    do {
        puts("+---==[ OPCOES ]==--+");
        puts("| 1........Adicao   |");
        puts("| 2........Subtracao|");
        puts("| 3........Divisao  |");
        puts("| 9........Pares    |");
        puts("| 0........Sair     |");
        puts("+-------------------+");
        printf(" Opcao: ");
        scanf("%d", &op);

        switch (op) {
        case 1:
            printf("Funcao de adicao ainda nao implementada.\n");
            break;

        case 2:
            printf("Funcao de subtracao ainda nao implementada.\n");
            break;

        case 3:
            printf("Funcao de divisao ainda nao implementada.\n");
            break;

        case 9: {
            int n;
            printf("Digite o valor final (n): ");
            scanf("%d", &n);
            mostrarEContarParesDe1AteN(n);
            break;
        }

        case 0:
            printf("Saindo...\n");
            break;

        default:
            puts("\n\n OPCAO INVALIDA!\n\n");
        }

    } while (op != 0);

    return 0;
}
