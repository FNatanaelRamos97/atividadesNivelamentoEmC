#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char Musica[] = "Um p� na soleira e um p� na cal�ada, um pi�o\nUm passo na estrada e um pulo no mato\nUm peda�o de pau\nUm p� de sapato e um p� de moleque\nL�o\n\nUm p� de moleque e um rabo de saia, um ser�o\nAs sombras da praia e o sonho na esteira\nUma alucina��o\nUma companheira e um filho no mundo\nL�o\n\nUm filho no mundo e um mundo virado, um irm�o\nUm livro, um recado, uma eterna viagem\nA mala de m�o\nA cara, a coragem e um plano de v�o\nL�o\n\nUm plano de v�o e um segredo na boca, um ideal\nUm bicho na toca e o perigo por perto\nUma pedra, um punhal\nUm olho desperto e um olho vazado\nL�o\n\nUm olho vazado e um tempo de guerra, um paiol\nUm nome na serra e um nome no muro\nA quebrada do sol\nUm tiro no escuro e um corpo na lama\nL�o\n\nUm nome na lama e um sil�ncio profundo, um pi�o\nUm filho no mundo e uma atiradeira\nUm peda�o de pau\nUm p� na soleira e um p� na cal�ada\n\0";
	int i=0, cont=0;
	
	do{
		printf("%c", Musica[i]);
		i++;
		
		if(Musica[i]=='p' && Musica[i+1]=='�') cont++; 
		
	}while(Musica[i]!='\0');
	
	printf("\n\nA palavra p� apareceu %d vezes.\n", cont);
	
	return 0;
}
