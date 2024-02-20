#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	

	float salariobase, salarioaumentado, imposto,resultado;
	
	printf("Seu salario: ");
	scanf("%f", &salariobase);
	
    salarioaumentado= salariobase*0.05;
    imposto= salariobase*0.07;
	
	resultado= salariobase+salarioaumentado-imposto;
	printf("seu novo salario e:%0.2f",resultado);
	
	return 0;
}

	