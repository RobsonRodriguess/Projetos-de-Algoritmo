#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	float soma, quantidade, media;
	soma=0;
	quantidade=0;
	
	printf("Calcule a média da idade de individuos inderteminados.\n");
	printf("O programa encerrara quando a idade '0' for digitada.\n");
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	
	while(idade > 0){
		
		soma = soma + idade;
		quantidade++;
		
		printf("Digite uma idade: ");
		scanf("%d", &idade);
	}
	
	media = soma / quantidade;
	
	printf("A média das idades digitadas é: %0.2f", media);
	
	return 0;
	
}
