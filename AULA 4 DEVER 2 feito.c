#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float salarioatual, salarioaumentado;
	
	printf("Seu salario: ");
	scanf("%f", &salarioatual);
	
    salarioaumentado = salarioatual * (1+0.25);
	
	printf("seu novo salario e:%f", salarioaumentado);
	
	return 0;
	
	
	
	
	
	
}