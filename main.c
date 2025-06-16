#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    int n, primeiro = 0, segundo = 1, proximo, i;

    printf("Digite o n�mero de termos da sequ�ncia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequ�ncia de Fibonacci com %d termos:\n", n);

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
