#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int i, numero;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Os numeros abaixo são divisivéis por 4: \n");
	for(i=1; i<=100; i++){
		if(i%4==0) printf("%d ", i);
	}
	
	printf("\n");
	system("pause");
	system("cls");
	
	printf("Digite qualquer número para saber seus divisores: ");
	scanf("%d", &numero);
	for(i=1; i<=100; i++){
		if(i%numero==0) printf("%d ", i);
	}
	
	
	return 0;
}
