#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float n1, n2;
	
	printf("para comparar 2 numeros e descobrir qual o maior ou menor que o ourtro siga \n");
	printf("Digite o primeiro numero:");
	scanf("%f", &n1);
	printf("digite o segundo numero: ");
	scanf("%f", &n2);
	
	
	if (n1>n2)
	{
		printf("O primeiro número e maior");
	}
	else
	{
	
 	if (n1<n2)
 	{
 		printf("O segundo numero e maior");
 		
	 }
	 else
	 {
	 	printf("sao iguais");
	 	
	 }
	}
		
	return 0;
		
		
	}
	
