#include <stdio.h>
main(){
	float alturadod, alturadese, degraus;
	printf("Digite a altura dos degraus em metros: ");
	scanf("%f", &alturadod);
	printf("Digite a altura que voce deseja chegar em metros: ");
	scanf("%f", &alturadese);
	degraus = alturadese / alturadod;
	printf("A quantidade de degraus necessarias para alcacar o seu objetivo e aproximadamente %f", degraus);
}
