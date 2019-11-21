#include <stdio.h>
#include <math.h>
main (){
	float angulo, altura, escada, radiano;
	printf("Digite o valor do angulo que a escada faz: ");
	scanf("%f", &angulo);
	printf("Digite a altura da escada em metros: ");
	scanf("%f", &altura);
	radiano = angulo * M_PI / 180.0;
	escada = altura / sin(radiano);
	printf("O tamanho da escada e %f metros.", escada);
}
