#include <stdio.h>
#include <conio.h>

int main(){

   float base, altura, area;

   int cont = 0;

   do{

       printf("Tentativa: %d\n", cont+1);

       printf("Insira a base do triangulo:\n");

       scanf("%f", &base);

       printf("Insira a altura do triangulo:\n");

       scanf("%f", &altura);

       area = ((base*altura)/2);

       printf("Area do tringulo:%.2f\n", area);

       cont = cont+1;

   }while(cont < 6);

   return 0;

}

