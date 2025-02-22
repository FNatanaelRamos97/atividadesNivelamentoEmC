#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char Musica[] = "Um pé na soleira e um pé na calçada, um pião\nUm passo na estrada e um pulo no mato\nUm pedaço de pau\nUm pé de sapato e um pé de moleque\nLéo\n\nUm pé de moleque e um rabo de saia, um serão\nAs sombras da praia e o sonho na esteira\nUma alucinação\nUma companheira e um filho no mundo\nLéo\n\nUm filho no mundo e um mundo virado, um irmão\nUm livro, um recado, uma eterna viagem\nA mala de mão\nA cara, a coragem e um plano de vôo\nLéo\n\nUm plano de vôo e um segredo na boca, um ideal\nUm bicho na toca e o perigo por perto\nUma pedra, um punhal\nUm olho desperto e um olho vazado\nLéo\n\nUm olho vazado e um tempo de guerra, um paiol\nUm nome na serra e um nome no muro\nA quebrada do sol\nUm tiro no escuro e um corpo na lama\nLéo\n\nUm nome na lama e um silêncio profundo, um pião\nUm filho no mundo e uma atiradeira\nUm pedaço de pau\nUm pé na soleira e um pé na calçada\n\0";
	int i=0, cont=0;
	
	do{
		printf("%c", Musica[i]);
		i++;
		
		if(Musica[i]=='p' && Musica[i+1]=='é') cont++; 
		
	}while(Musica[i]!='\0');
	
	printf("\n\nA palavra pé apareceu %d vezes.\n", cont);
	
	return 0;
}
