#include <stdio.h>
#include <locale.h>


main(){
	int soma = 0, i , limite;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o numero para somat�ria: ");
	scanf("%d", &limite);
	
	for(i=0; i<=limite; i++) soma+=i;
	
	printf("\nO somat�rio �: %d", soma);
	
	return 0;
}
