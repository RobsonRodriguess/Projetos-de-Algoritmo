#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, opcao, maior, menor, resultado, somapares, qtdpares, quantidade;
	float media, medpares;
	resultado = 1;
	quantidade = -1;
	maior = 0;
	qtdpares = 0;
	somapares = 0;
	
	
	
	printf("Bem vindo a calculadora do robsin.\n");
	
	do {
	
		printf("\n Selecione a op��o que desejar: \n");
		printf("(1) Soma dos n�meros digitados; \n");
		printf("(2) Quantidade de n�meros digitados; \n");
		printf("(3) M�dia dos n�meros digitados; \n");
		printf("(4) Maior n�mero digitado; \n");
		printf("(5) Menor n�mero digitado; \n");
		printf("(6) M�dia dos n�meros pares; \n");
		printf("(7) Sair; \n");
		printf("\nEscolha uma Op��o: ");
		scanf("%d", &opcao);
	
		switch (opcao){
		
			case 1:
				printf("\nInsira os valores desejados e aperte enter.\nPara encerrar tecle -1. \nDigite um n�mero: \n");
            	scanf("%d", &num);
            	resultado = resultado + num;
            	
				while (num>=0) {
            	    printf("Digite um n�mero: \n");
                	scanf("%d", &num);
                	resultado = resultado + num;
                	
            	}
				printf("\nSoma dos n�meros digitados: %d\n", resultado);
				break;
				
			case 2:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um n�mero: \n");
            	scanf("%d", &num);
            	quantidade = quantidade + 1;
            	
            	while (num >= 0){
            		printf("Digite um n�mero: \n");
                	scanf("%d", &num);
                	quantidade = quantidade + 1;
            		
				}
            	
				printf("\nQuandidade de n�meros digitados: %d\n", quantidade);
				break;
				
			case 3:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um n�mero: \n");
            	scanf("%d", &num);
            	quantidade = quantidade + 1;
            	resultado = resultado + num;
            	
            	while(num>=0){
            		printf("Digite um n�mero: \n");
                	scanf("%d", &num);
                	quantidade = quantidade + 1;
                	resultado = resultado + num;
            		
				}
            	media = resultado / quantidade;	
            	
				printf("\nM�dia dos N�meros digitados: %0.2f\n", media);
				break;
				
			case 4:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um n�mero: \n");
            	scanf("%d", &num);
            	if(num>maior){
            		maior=num;
				}
            	while (num >= 0){
            		printf("Digite um n�mero: \n");
                	scanf("%d", &num);
                	if(num>maior){
            			maior=num;
            		}
            		
				}
				
				printf("\nMaior n�mero digitado: %d\n", maior);
				break;
				
			case 5:
				

				
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um n�mero: \n");
            	scanf("%d", &num);
            	menor = num;
            	
            	if(num < menor && num != -1){
            		menor = num;
				}
				
            	while (num >= 0 ){
            		printf("Digite um n�mero: \n");
                	scanf("%d", &num);
                	
                	if(num < menor && num != -1){
            			menor = num;
            		}
            		
				}
				
				
				printf("\nMenor n�mero digitado: %d\n", menor);
				break;
				
			case 6:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um n�mero: \n");
            	scanf("%d", &num);
            	if(num % 2 ==0){
            		somapares = somapares + num;
            		qtdpares = qtdpares + 1;
				}
            	
            	while (num >= 0){
            		printf("Digite um n�mero: \n");
                	scanf("%d", &num);
                	if(num % 2 ==0){
            		somapares = somapares + num;
            		qtdpares = qtdpares + 1;
					}
                }
                
                medpares = somapares / qtdpares;
				
				printf("\nMedia dos n�meros pares: %0.2f\n", medpares);
				break;
				
			case 7:
				printf("\nVoc� teclou sair, vlw e flw\n");
				break;
				
			default:
				printf("\nOp��o invalida! Tente outra vez.\n");
		
		}
		
	}while (opcao != 7);
	
	return 0;
	
}
