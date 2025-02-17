//exercico 2
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[3];
	int reserva;
	int i,j;
	
	for(i=0; i<3; i++){
		printf("Digite o numero %d: ",i+1);
		scanf("%d", &num[i]);
		system("cls");
	}
	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++){
			if(num[j]<num[i]){
				reserva=num[i];
				num[i]=num[j];
				num[j]=reserva;
			}
		}
		
	for(i=0; i<3; i++) printf("\n%d", num[i]);		
	
	
	return 0;
}
