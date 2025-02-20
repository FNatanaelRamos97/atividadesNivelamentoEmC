#include <stdio.h>

main(){
	int i, j, cont=0;
	unsigned long long fatorial = 1, primordial = 1;
	
	for(i=1; i<=50; i++){
		for(j=1; j<=i; j++){
			if(i%j==0) cont++;	
		} 
		
		fatorial*=i;
		
		if(cont<=2) {
			printf("%d ", i);
			primordial*=i;	
		}
		cont=0;
	}
	
	printf("\nO fatorial de 1 a 50 e: %.2Le\n", (long double)fatorial);
    printf("O primordial de 1 a 50 e: %.2Le\n", (long double)primordial);
	

	
	return 0;
}
