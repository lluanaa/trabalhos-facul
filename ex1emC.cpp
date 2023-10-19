#include <stdio.h>
#include <conio.h>

	int main(){
		int l, a, c; 
	    float z;

	    printf("\nEntre com valor de L: ");
	    scanf("%i", &l);

	    printf("\nEntre com valor de A: ");
	    scanf("%i", &a);

	    printf("\nEntre com valor de C: ");
	    scanf("%i", &c);

	    z = ((l+a) * 2.3) / c;

	    printf("\nValor de Z = %0.3f", z);
	 

	return(0);
}
