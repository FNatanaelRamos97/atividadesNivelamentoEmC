#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int anoInicial = 2017, op;
	int anoAtual = 2024;
	float salario = 1000;
	float porcenAumento = 0.015;
	
		printf("Informe a op��o desejada.\n");
		printf("1 - La�o While;\n2 - La�o Do While;\n3 - La�o For;\n");
		scanf("%d", &op);
		
		switch(op){
			
			case 1:
				while(anoAtual!=2024){
					salario+=salario*porcenAumento;
					porcenAumento*=2;
					
					printf("%.2f\n", salario);
					
					anoAtual++;
				}
				break;
				
			case 2:
				do{
					salario+=salario*porcenAumento;
					porcenAumento*=2;
					
					anoAtual++;
					
				}while(anoAtual!=2024);
				break;
				
			case 3:
				for(anoInicial=2017; anoInicial<anoAtual; anoInicial++){
					salario+=salario*porcenAumento;
					porcenAumento*=2;
				}
				break;
				
			default:
				printf("Op��o inv�lida!\n");	
		}
	
	
	printf("O sal�rio em %d � de R$ %.2f\n", anoAtual, salario);
	
	
	return 0;
}
