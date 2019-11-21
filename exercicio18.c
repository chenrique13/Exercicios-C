#include <stdio.h>
main(){
	float racao, racaodiaria, gatos;
	printf("Digite o peso do saco de racao em KG: ");
	scanf("%f", &racao);
	printf("Digite a quantidade de racao diaria de um gato em gramas: ");
	scanf("%f", &racaodiaria);
	racaodiaria = racaodiaria * 10;
	racao = racao - racaodiaria;
	printf("Restaram %.2fKG de racao.", racao);
}
