//atividade3_conversorDeUnidades

#include <stdio.h>
#include <string.h>
typedef struct{
	int hora;
	int minuto;
	int segundo;
}tempo;


void leituraTempoHora(tempo *t){
	
	printf("Digite o valor das horas: ");
	scanf("%d", &t->hora);
	
	printf("Digite o valor dos minutos: ");
	scanf("%d", &t->minuto);
	
	printf("Digite o valor dos segundos: ");
	scanf("%d", &t->segundo);
}

void leituraTempoMinuto(tempo *t){
	
	printf("Digite o valor dos minutos: ");
	scanf("%d", &t->minuto);
	
	printf("Digite o valor dos segundos: ");
	scanf("%d", &t->segundo);
}

void leituraTempoSegundo(tempo *t){
	
	printf("Digite o valor dos segundos: ");
	scanf("%d", &t->segundo);
}

float leitura(){
	float valor;
	printf("Digite o valor o valor a ser convertido: ");
	scanf("%f",&valor);
	return valor;
}

void exibe(float tempConvertida, float temp, char *nomeTemp, char *nomeConvertida){
	printf("%.2f %s e equivalente a %f %s.\n", temp, nomeTemp, tempConvertida, nomeConvertida);
}

float converte(char *nome, char *nomeConvert, float valor){
	if((strcmp(nome,"Celsius")==0)&&(strcmp(nomeConvert,"Fahrenheit")==0))
		return valor*1.8+32;
	
	else if	((strcmp(nome,"Celsius")==0)&&(strcmp(nomeConvert,"Kelvin")==0))
		return valor+273;
		
	else if ((strcmp(nome,"Fahrenheit")==0)&&(strcmp(nomeConvert,"Celsius")==0))
		return (valor-32)/1.8;
	
	else if ((strcmp(nome,"Fahrenheit")==0)&&(strcmp(nomeConvert,"Kelvin")==0))
		return (valor-32)*0.55+273;
	
	else if ((strcmp(nome,"Kelvin")==0)&&(strcmp(nomeConvert,"Celsius")==0))
		return valor-273;
	
	else if ((strcmp(nome,"Kelvin")==0)&&(strcmp(nomeConvert,"Fahrenheit")==0))
		return (valor-273)*1.8+32;	
		
	else if	((strcmp(nome,"Metros")==0)&&(strcmp(nomeConvert,"Quilometros")==0))
		return valor/1000;
		
	else if ((strcmp(nome,"Metros")==0)&&(strcmp(nomeConvert,"Milhas")==0))
		return valor/1609;
	
	else if ((strcmp(nome,"Quilometros")==0)&&(strcmp(nomeConvert,"Metros")==0))
		return valor*1000;
	
	else if ((strcmp(nome,"Quilometros")==0)&&(strcmp(nomeConvert,"Milhas")==0))
		return valor/1.609;
	
	else if ((strcmp(nome,"Milhas")==0)&&(strcmp(nomeConvert,"Metros")==0))
		return valor*1609.34;
	
	else if ((strcmp(nome,"Milhas")==0)&&(strcmp(nomeConvert,"Quilometros")==0))
		return valor*1.609;	
	
}


int main(){
	int opcao, opcao2;
	char unidade[20], convertida[20];
	float valor, valorConvert;
	
	printf("-- Digite o numero da opcao abaixo --\n");
	printf("1 - Conversor de temperatura.\n2 - Conversor de distancia.\n3 - Conversor de tempo.\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1://conversor de temperatura
			printf("-- Bem vindo ao conversor de temperaturas --\n-- Digite a opcao para conversao --\n");
			printf("1 - Celsius para Fahrenheit.\n2 - Celsius para Kelvin.\n");
			printf("3 - Fahrenheit para Celsius.\n4 - Fahrenheit para Kelvin.\n");
			printf("5 - Kelvin para Celsius.\n6 - Kelvin para Fahrenheit\n");
			scanf("%d", &opcao2);
			
			switch(opcao2){
				
				case 1://celsius para fahrenheit
					valor = leitura();
					strcpy(unidade, "Celsius");
					strcpy(convertida, "Fahrenheit");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;
				
				case 2://celsius para kelvin
					valor = leitura();
					strcpy(unidade, "Celsius");
					strcpy(convertida, "Kelvin");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;
				
				case 3:	//fahrenheit para celsius
					valor = leitura();
					strcpy(unidade, "Fahrenheit");
					strcpy(convertida, "Celsius");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;			
				
				case 4: //fahrenheit para kelvin
					valor = leitura();
					strcpy(unidade, "Fahrenheit");
					strcpy(convertida, "Kelvin");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;	
				
				case 5: //kelvin para celsius
					valor = leitura();
					strcpy(unidade, "Kelvin");
					strcpy(convertida, "Celsius");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;	
					
				case 6:	//kelvin para fahrenheit
					valor = leitura();
					strcpy(unidade, "Kelvin");
					strcpy(convertida, "Fahrenheit");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;
						
				default:
					printf("Opcao invalida!\n");
					break;	
			}
			
		case 2:	//conversor de distancia
			printf("-- Bem vindo ao conversor de distancia --\n-- Digite a opcao para conversao --\n");
			printf("1 - Metros para Quilometros.\n2 - Metros para Milhas.\n");
			printf("3 - Quilometros para Metros.\n4 - Quilometros para Milhas.\n");
			printf("5 - Milhas para Metros.\n6 - Milhas para Quilometros\n");
			scanf("%d", &opcao2);
			
			switch(opcao2){
				//char unidade[20], convertida[20];
				//float valor, valorConvert;
				
				case 1://metros para quilometros
					valor = leitura();
					strcpy(unidade, "Metros");
					strcpy(convertida, "Quilometros");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;
				
				case 2://metros para milhas
					valor = leitura();
					strcpy(unidade, "Metros");
					strcpy(convertida, "Milhas");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;
				
				case 3:	
					valor = leitura();
					strcpy(unidade, "Quilometros");
					strcpy(convertida, "Metros");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;			
				
				case 4: //fahrenheit para kelvin
					valor = leitura();
					strcpy(unidade, "Quilometros");
					strcpy(convertida, "Milhas");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;	
				
				case 5: //kelvin para celsius
					valor = leitura();
					strcpy(unidade, "Milhas");
					strcpy(convertida, "Metros");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;	
					
				case 6:	//kelvin para fahrenheit
					valor = leitura();
					strcpy(unidade, "Milhas");
					strcpy(convertida, "Quilometros");
					valorConvert = converte(unidade, convertida, valor);
					exibe(valorConvert, valor, unidade, convertida);
					break;
						
				default:
					printf("Opcao invalida!\n");
					break;	
			}
			
			case 3:
				printf("-- Bem vindo ao conversor de Tempo --\n-- Digite a opcao para conversao --\n");
				printf("1 - Horas para minutos.\n2 - Horas para segundos.\n");
				printf("3 - Minutos para horas.\n4 - Minutos para segundos.\n");
				printf("5 - Segundos para horas.\n6 - Segundos para minutos\n");
				scanf("%d", &opcao2);
				
				tempo t;
				float tempoConvert;
			
				switch(opcao2){
					
				case 1://horas para minutos
					leituraTempoHora(&t);
					tempoConvert = 60*t.hora+t.minuto+t.segundo;
					printf("O tempo e %.3f minutos!", tempoConvert);
					break;
				
				case 2://horas para segundos
					leituraTempoHora(&t);
					tempoConvert = (3600*t.hora)+(t.minuto*60)+t.segundo;
					printf("O tempo e %.3f segundos!", tempoConvert);
					break;
					
				case 3://minutos para horas
					leituraTempoMinuto(&t);
					tempoConvert = ((t.minuto*60)+t.segundo)/3600;
					printf("O tempo e %.3f horas!", tempoConvert);
					break;
					
				case 4://minutos para segundos
					leituraTempoMinuto(&t);
					tempoConvert = (t.minuto*60)+t.segundo;
					printf("O tempo e %.3f segundos!", tempoConvert);
					break;
					
				case 5://segundos para horas 
					leituraTempoSegundo(&t);
					tempoConvert = t.segundo/3600;
					printf("O tempo e %.3f horas!", tempoConvert);
					break;
				
				case 6://segundos para minutos
					leituraTempoSegundo(&t);
					tempoConvert = t.segundo/60;
					printf("O tempo e %.3f minutos!", tempoConvert);
					break;
					
				default:
					printf("Opcao invalida!\n");
					break;
			}
	}
	
	return 0;
}


