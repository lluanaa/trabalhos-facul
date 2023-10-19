#include <stdio.h>
#include <conio.h>
 
int main(void)
{
    float c, f;
 
    printf("Digite um numero em Fahrenheit para ser convertido em Celsius. F = "); scanf("%f", &f);
 
    c = (5.0/9.0) * (f-32);
 
    printf("C = %f", c);
 
	int F;
	for (F = 40; F <= 60; F ++){

		float C = (5.0/9.0) * (F-32);

		printf("\n\nA temperatura %i em Fahrenheit corresponde a %0.2f em Celsius", F, C); 
	}	

	return(0);
}


