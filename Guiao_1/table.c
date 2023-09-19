#include <stdio.h>
#include <math.h>

int main ( void ){
	int lines;
	int i;
	
	printf("Number of lines: ");
	scanf("%d",&lines);
	printf("N	N²	sqrt(N)\n");


	for (i=1;i<=lines;i++){
		float g;
		int h;
		g = sqrt(i);
		h = i*i;
		printf("%d	%d	%.1f\n", i, h, g);
	}
	return 0;
}