#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float alturadegrau, alturadesejada, soma;
	
	printf("Para calcular a altura que voc� quer chegar siga os passos seguintes \n");
	printf("Digite a altura em cent�metros do degrau: ");
	scanf("%f", &alturadegrau);
	printf("Digite a altura em cent�metros que voc� quer chegar: ");
	scanf("%f", &alturadesejada);
	
	soma= alturadesejada/alturadegrau;
	
	printf("Voc� tera que subir %0.2f degraus", soma);
	
	return 0;
}
