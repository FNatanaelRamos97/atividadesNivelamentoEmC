#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	int num[5], entrada, cont = 0, contPar=0;
	int soma = 0, maior = 0, menor = 100, somaPar = 0;
	float mediaPar;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Digite um numero entre 0 e 100: ");
		scanf("%d", &entrada);
		
		if(entrada>=0 && entrada<=100){
			num[cont]=entrada;
			soma+=num[cont];
			
			if(num[cont]>maior) maior=num[cont];
			
			if(num[cont]<menor) menor=num[cont];
			
			if(num[cont]%2==0){
				somaPar+=num[cont];
				contPar++;
			} 
			
			cont++;
			
		}else printf("\nOPERAÇÃO INVÁLIDA, TENTE NOVAMETE!\n");
			
	}while(cont!=5);
	
	system("cls");
	
	printf("A soma dos numeros digitados: %d\n", soma);
	printf("A média dos numeros digitados: %d\n", soma/cont);
	printf("O maior numero digitado: %d\n", maior);
	printf("O menor numero digitado: %d\n", menor);
	printf("A média dos numeros pares: %d\n", somaPar/contPar);
	mediaPar = ((float)contPar/5)*100;
	printf("A percentagem dos numeros pares entre os numeros digitados: %.1f%% \n", mediaPar);
	
	
	return 0;
}
