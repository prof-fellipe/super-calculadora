#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 void Potencia(){
    int num1,num2, result;

    printf("Digite o numero da base: \n");
    scanf("%d",&num1);
    printf("Digite o numero do expoente: \n");
    scanf("%d",&num2);

    result = pow(num1, num2);

    printf("O resultado eh: %d \n",result);

}
int main()
{
   int op = 0;

   do {
   puts("+---==[ OPCOES ]==--+");
   puts("| 1........Adicao   |");
   puts("| 2........Subtracao|");
   puts("| 3........Divisao  |");
   puts("| 4........Potencia |");
   puts("| 0........Sair     |");
   puts("+-------------------+");
   printf(" Opcao: ");
   scanf("%d", &op);

   switch(op){
   case 1:
       // função soma;
       break;
   case 2:
       // fução subtração;
    break;
   case 4:
        Potencia();
    break;
   case 0:
    break;

   default:
    puts("\n\n OPCAO INVALIDA!\n\n");

   }
   }while(op != 0);

    return 0;
}
