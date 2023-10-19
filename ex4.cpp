#include <conio.h>
#include <stdio.h>

int main()
{
	int contador;
	float valor, total;
	total = 0;
	contador = 1;
	
	
	while(contador <= 20 ){
		printf ("\n\nDigite um valor real: ");
		scanf ("%f", &valor);
		total = valor + total;
		contador++;
		
	}
	valor = total / 1;
	printf ("\nO total da soma e: %2f\n", total);
	return 0;
	
}
