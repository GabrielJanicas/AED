#include <stdio.h>
int main()
{
	printf("%lu\n", sizeof(void *));
	printf("%lu\n", sizeof(void));
	printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long));
	printf("%lu\n", sizeof(long long));
	printf("%lu\n", sizeof(float));
    printf("%lu", sizeof(double));
    return 0;
}