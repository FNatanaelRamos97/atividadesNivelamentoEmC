//exercicio1

#include <stdio.h>

int main(){
	
	int num=0;

	printf("Digite um ano para saber se ele e bissexto: ");
	scanf("%d", &num);
	
	if(num%100==0 && num%400==0) printf("\nEsse ano e bissexto!");
	else if(num%4==0 && num%100!=0) printf("\nEsse ano e bissexto!");
	else printf("\nEsse ano nao e bissexto");


return 0;
}
