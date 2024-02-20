#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char estadocivil;
	
	printf("Digite a primeira letra para saber seu estado civil: ");
	scanf("%c", &estadocivil);
	
	switch (estadocivil)
	{
		case 'C':
		case 'c':
			printf("casado");
		    break;
		
		case 'S':
		case 's':
			printf("solteiro");
			break;
		
		case 'V':
		case 'v':
			printf("viúvo");
			break;
		
		case 'D':
		case 'd':
			printf("divorciado");
			break;
		
		case 'q':
		case'Q':
			printf("desquitado");
			break;
		
		case 'r':
		case 'R':
			printf("Rei delas");
			break;
			
		default:
			printf("invalido");
			break;
			
	}
	
	
	return 0;
	
}
		
		
		
