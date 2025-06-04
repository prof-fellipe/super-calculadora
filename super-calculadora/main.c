#include <stdio.h>
#include <stdlib.h>

int main()
{
   int op = 0;

   do {
   puts("+---==[ OPCOES ]==--+");
   puts("| 1........Adicao   |");
   puts("| 2........Subtracao|");
   puts("| 1........Divisao  |");
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
   case 0:
    break;

   default:
    puts("\n\n OPCAO INVALIDA!\n\n");

   }
   }while(op != 0);

    return 0;
}
