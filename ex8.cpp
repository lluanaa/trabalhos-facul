#include <stdio.h>
#include <locale.h>

int main()
{
	int mat[4][5], L, C, i, somaCol, somaTotal;
	
	somaTotal = 0;
	
	for (L = 0; L <= 3; L++) {
		somaCol = 0;
		for(C = 0; C <= 4; C++){
		
		printf("Digite o valor da linha %i e da coluna %i: ", L, C);
		scanf("%i", &mat[L][C]);
		somaCol = somaCol + mat[L][C];
		}
		
		somaTotal = somaTotal + somaCol;
		printf("\nA soma dessa coluna e: %i\n\n", somaCol);	
	}
	
	printf("\nA soma total de todas as colunas e: %i\n\n", somaTotal);
	
	return(0);
	
}
