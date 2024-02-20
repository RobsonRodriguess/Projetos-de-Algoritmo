#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float alturadegrau, alturadesejada, soma;
	
	printf("Para calcular a altura que voce quer chegar siga os passos seguintes \n");
	printf("Digite a altura em centimetros do degrau: ");
	scanf("%f", &alturadegrau);
	printf("Digite a altura em centimetros que voce quer chegar: ");
	scanf("%f", &alturadesejada);
	
	soma= alturadesejada/alturadegrau;
	
	printf("Voce tera que subir %0.2f degraus", soma);
	
	return 0;
}
