#include <stdio.h>
#include <math.h>
main(){
	float raio, area;
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	area = (M_PI * pow(raio,2));
	printf("A area do circulo vale %f", area);
}
