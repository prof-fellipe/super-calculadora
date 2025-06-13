#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num=0, porc=0, resultado=0;
    printf("Digite o numero desejado: ");
    scanf("%f", &num);

    printf("Agora digite a porcentagem desejada: ");
    scanf("%f", &porc);

    resultado = (num * porc)/100;

    printf ("O resultado do numero é: %.2f", resultado);


    return 0;
}


