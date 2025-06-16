#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    int n, primeiro = 0, segundo = 1, proximo, i;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci com %d termos:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            proximo = i;
        else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }

    printf("\n");

    return 0;
}
