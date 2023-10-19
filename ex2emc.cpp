#include <conio.h>
#include <stdio.h>

int main(){
	float altura, peso_i;
char sexo;

   printf("\nEntre com o seu sexo, M para Masculino ou F para Feminino: ");
   sexo = getche();
   
   printf("\nEntre com a sua altura: ");
    scanf("%f", &altura);
    
    switch (sexo){
    case 'F' : {
    	peso_i = (400.7 * altura) / 10;
    	printf("\nSeu peso ideal e: %.2f", peso_i);
		break;
		}
	
    case 'f' : {
    	peso_i = (400.7 * altura) / 10;
    	printf("\nSeu peso ideal e: %.2f", peso_i);
		break;
		}
	
	
	case 'M' : {
   	 	peso_i = (450.7 * altura) / 10;
   		 printf("\nSeu peso ideal e: %.2f", peso_i);
   	 	break;
   }
		
   case 'm' : {
   		peso_i = (450.7 * altura) / 10;
   	 	printf("\nSeu peso ideal e: %.2f", peso_i);
   	 	break;
   }
   
   }
}

	

   


