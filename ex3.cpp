#include<conio.h>
#include<stdio.h>

int main(){
	
char exercicio;

printf("\nEscolha um exercicio entre 1, 2, 4. ou digite 5 para sair: ");

exercicio = getche();
switch (exercicio)

{

case '1' : { printf ("\n\nExercicio 1:\n-------------------------\n"); break; }

case '2' : { printf ("\n\nExercicio 2:\n-------------------------\n"); break; }

case '4' : { printf ("\n\nExercicio 4:\n-------------------------\n"); break; }

case '5' : { printf ("\n\nFim da execucao. Tudo de bom!\n--------------------\n"); break; }

default : { printf ("\n\nEscolha invalida. Volte e escolha um novo valor"); break; }

}

}
