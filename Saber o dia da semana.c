#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int dia;
	
	printf("Para saber o dia da semana digite o numero correspondente de 1 a 7: ");
	scanf("%d", &dia);
	
	switch(dia)
	
	{
		case 1:
			printf("Domingo");
			break;
			
			case 2:
				printf("segunda-feira");
				break;
				
				case 3:
					printf("terça-feira");
					break;
			
			
					case 4:
						printf("quarta-feira");
						break;
						
						case 5:
							printf("quinta-feira");
							break;
							
							case 6:
								printf("sexta-feira");
								break;
								
								case 7:
									printf("sábado");
									break;
									
									default:
										printf("Numero errado");
									
		
		
		
		
			
	}
	
	return 0;
	
}