#include <stdio.h>
#include <stdlib.h>


int main()
{
	int vet[10], i, menor = 99999, maior = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor da posicao %d: ", i);
		scanf("%d", &vet[i]);
		
	}
	
	for(i = 0; i < 10; i++){
		printf("%d", vet[i]);
		if(menor > vet[i])
	    	menor = vet[i];
		if(maior < vet[i])
	    	maior = vet[i];
	}
	
	printf("\nMenor valor: %d\n\nMaior valor: %d\n\n", menor, maior);
	printf("\nPosicao de cada numero informado: \n", menor);
	
	for(i = 0; i <= 9; i++){
		printf("\n %d: %d", i, vet[i]);
	}
	
return 0;


}
