#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcularDelta() {
    float a, b, c, delta;

    printf("Digite os coeficientes a, b e c da equação do segundo grau (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Isso não é uma equação do segundo grau.\n");
        return;
    }

    delta = b * b - 4 * a * c;
    printf("Delta (Δ) = %.2f\n", delta);

    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        float raiz = -b / (2 * a);
        printf("Existe uma raiz real: x = %.2f\n", raiz);
    } else {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raízes reais:\n");
        printf("x1 = %.2f\n", raiz1);
        printf("x2 = %.2f\n", raiz2);
    }
}

int main() {
    int op = 0;

    do {
        puts("+---==[ OPCOES ]==--+");
        puts("| 1........Adicao   |");
        puts("| 2........Subtracao|");
        puts("| 3........Divisao  |");
        puts("| 19.......Delta    |");
        puts("| 0........Sair     |");
        puts("+-------------------+");
        printf(" Opcao: ");
        scanf("%d", &op);

        switch(op) {
        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 19:
            calcularDelta();
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            puts("\n\n OPCAO INVALIDA!\n\n");
        }

        printf("\n");

    } while(op != 0);

    return 0;
}
