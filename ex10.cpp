#include <stdio.h>
#include <stdlib.h>


float CalculaMedia(float n0, float n1, float n2, float n3);

void AprovadoReprovado(float media);

int main(){

   float n0, n1, n2, n3;
   int resp;

   do{

       printf("Insira a Nota 0\n");
       scanf("%f",&n0);

       printf("Insira a Nota 1\n");
       scanf("%f",&n1);

       printf("Insira a Nota 2\n");
       scanf("%f",&n2);

       printf("Insira a Nota 3\n");
       scanf("%f",&n3);

       printf("\nNota0: %.2f\nNota1: %.2f\nNota2: %.2f\nNota3: %.2f\n",n0, n1, n2, n3);

       printf("\nMedia = %.2f\n",CalculaMedia(n0, n1, n2, n3));

       AprovadoReprovado(CalculaMedia(n0, n1, n2, n3));

       printf("\n\nDeseja calcular outra nota? Sim = 1 Nao = 0\n");

       scanf("%d",&resp);

       }while(resp == 1);

   return 0;

}


float CalculaMedia(float n0, float n1, float n2, float n3){

   float media;

   media = ((n0+n1+n2+n3)/4);

   return media;

}

void AprovadoReprovado(float media){

   if(media >= 6.0){
    printf("\nAprovado\n");

   }else{
    printf("\nReprovado\n");

   }

}
