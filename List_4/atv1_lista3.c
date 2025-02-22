#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char Musica[] = "soleira";
	int i;
	
	for(i=0; Musica[i]!='\0'; i++) {
		printf("%c", Musica[i]);
		Musica[i]+=3;
	}
	
	printf("\n");
	
	for(i=0; Musica[i]!='\0'; i++) {
		printf("%c", Musica[i]);
		Musica[i]-=3;
	}
	
	printf("\n");
	
	for(i=0; Musica[i]!='\0'; i++) printf("%c", Musica[i]);
	
	
	return 0;
}
