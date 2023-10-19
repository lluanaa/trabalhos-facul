#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
	 
	 
	 struct registro {
			int data[3];
	 		int cod;
			char nome[50], sobrenome[50];
			char end[50];
			char sexo[10];
			float vldivida, vlcredito;
			int idade;
			char status[10];
		} registro[5];
	 
	 int main(){
	 	
		setlocale(LC_ALL, "Portuguese");
		
		int i;
		int rep;
		int d;
		char nome[50], end[50];
	
		do{
		
			for (i = 0; i <= 4; i++) {
				for (d = 0; d <= 2; d++){
					if (d == 0){
						printf("\nDigite o dia de nascimento: ");
						scanf("%d",&registro[i].data[0]);
					} 
					if(d == 1){
				
						printf("\nDigite o mês de nascimento: ");
						scanf("%d",&registro[i].data[1]);
					}
					if(d == 2){
					
						printf("\nDigite o ano de nascimento: ");
						scanf("%d",&registro[i].data[2]);
					}
				}
				
				printf("\nDigite o código do cliente: ");
				scanf("%d",&registro[i].cod);
						
				printf("\nNome do cliente: ");
				fflush(stdin);
				gets(nome);
				
				printf("\nEndereço do cliente: ");
				fflush(stdin);
				gets(end);
				
				printf("\nSexo: ");
				scanf("%s",registro[i].sexo);
				
				printf("\nValor da dívida: ");
				scanf("%f",&registro[i].vldivida);
				
				printf("\nValor do crédito: ");
				scanf("%f",&registro[i].vlcredito);
				
				printf("\nIdade do cliente: ");
				scanf("%d",&registro[i].idade);
				
				printf("\nStatus: ativo ou inativo: ");
				scanf("%s",registro[i].status);
				
				printf("\n---------------------------------------------------------------------------------------------------\n");
				
			}
		
			for(i = 0; i <= 4; i++){
				printf(" \n Data de nascimento: %d/%d/%d", registro[i].data[0], registro[i].data[1], registro[i].data[2]);
				printf(" \n O código do cliente: %d ", registro[i].cod);
		    	printf(" \n O nome do cliente: %s ", registro[i].nome);
		    	printf(" \n O endereço do cliente: %s ", registro[i].end);
		    	printf(" \n O sexo do cliente: %s ", registro[i].sexo);
		    	printf(" \n O valor da dívida do cliente: %0.2f ", registro[i].vldivida);
		    	printf(" \n A idade do cliente: %d ", registro[i].idade);
		    	printf(" \n O status do cadastro do cliente: %s ", registro[i].end);
		    	printf(" \n ------------------------------------------------------------------------");
		    	printf(" \n ------------------------------------------------------------------------------------------------\n");
			}


			printf("\nPara realizar novos cadastros digite 1, para encerrar digite 2: \n");
			scanf("%d",&rep);

		 
			if (rep == 1) {
				system("cls");
			}	
		}while(rep == 1);

		if (rep == 2) {
			printf("\n\nSistema encerrado com sucesso, precione ENTER para fechar.");
		} 

		return(0);	  
	 }
