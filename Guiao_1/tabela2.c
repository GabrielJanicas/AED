#include <stdio.h>
#include <math.h>

int main ( void ){
	int graus1;
	int graus2;
	int espaçamento;
	int i;
	
	printf("Maior valor do angulo(graus): ");
	scanf("%d",&graus1);
	printf("Menor valor do angulo(graus): ");
	scanf("%d",&graus2);
	printf("Espaçamento entre valores apresentados: ");
	scanf("%d",&espaçamento);
	printf("ang	sin(ang) cos(ang)\n");
	printf("_ _ _ _ _ _ _ _ _ _ _\n");


	for (i=graus2;i<=graus1;i = i+espaçamento){
		float g;
		float h;
		g = cos(i);
		h = sin(i);
		printf("%d	%.1f	%.1f\n", i, h, g);
	}
	if (graus1/espaçamento != 0){
		float g;
		float h;
		g = cos(graus1);
		h = sin(graus1);
		printf("%d	%.1f	%.1f\n", graus1, h, g);
	}
	return 0;
}