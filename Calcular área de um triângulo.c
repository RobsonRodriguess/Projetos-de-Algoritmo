#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float b,h,a;
	
	do{
	
	printf("Para saber a area de um triangulo siga...\n");
	printf("Digite a altura do triangulo: ");
	scanf("%f", &h);
	
		while(h<=0)
		{
		printf("Digite um valor valido: ");
		scanf("%f",&h);
		}
	
	
	printf("Digite a base do triangulo: ");
	scanf("%f", &b);
	
	while (b<=0)
	{
		printf("Digite um valor valido: ");
		scanf("%f",&b);
	}
	
	}while(h<=0 && b<=0);
	a= (b*h)/2;
	
	printf("Seu resultado e:%0.2f ", a);
	

	return 0;
	
}
