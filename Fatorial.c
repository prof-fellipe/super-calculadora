#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    printf("Fatorial de %d é %d\n", n, resultado);
}

int main() {
    setlocale (LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        fatorial(numero);
    }

    return 0;
}
