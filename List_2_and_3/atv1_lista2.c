#include <stdio.h>
#include <locale.h>

int calcularCedula(){
	int valorSaque, valor;
	int opcao = 1, i, qtdCedula;
	
		printf("Informe o valor para saque(minimo 10 e no maximo 1000): ");
		scanf("%d", &valorSaque);
		
		if(valorSaque%10==0 && valorSaque>=10 && valorSaque<=1000){
			
			for(i=0; i<4; i++){
				
				switch(i){
					case 0:
						valor = 100;
						break;
					case 1:
						valor = 50;
						break;
					case 2:
						valor = 20;
						break;	
					case 3:
						valor = 10;
						break;		
				}
				
				qtdCedula = valorSaque/valor;
				valorSaque = valorSaque%valor;
				
				if(qtdCedula!=0) printf("%d cedulas de R$ %d\n",qtdCedula,valor);
			}
			
		}else{
			printf("Valor invalido!\n");
			return 1;
		}
		
		printf("Deseja um novo saque(1 para sim e 2 para nao): ");
		scanf("%d", &opcao);
		
		return opcao;
}

void lacoWhi(){
	int op = 1;		
		
	while(op == 1){
		op = calcularCedula();
	}
	
}

void lacoDoWhi(){
	int op;
	
	do{
		op = calcularCedula();	
	}while(op == 1);
}

void lacoFor(){
	int op, i;
	
	for(i=0; i<10; i++){
		
		op = calcularCedula();
		if(op == 2) break;
		
	}
}

main(){
	int opcao, continuar;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Informe a opção desejada.\n");
		printf("1 - Laço While;\n2 - Laço Do While;\n3 - Laço For;\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			
			case 1:
				lacoWhi();
				break;
			case 2:
				lacoDoWhi();
				break;
			case 3:
				lacoFor();
				break;
			default:
				printf("Opção inválida!\n");
				continue;	
		}
		printf("Deseja continuar(1 para sim e 2 para não): ");
		scanf("%d", &continuar);
		
	}while(continuar==1);
	
	return 0;
		
}
