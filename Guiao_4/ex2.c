#include <assert.h>
#include <stdio.h>

int func(int array[], int size);
static int nComp;

int main(void)
{
	int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int array2[] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};
	int array3[] = {1, 2, 4, 8, 5, 6, 7, 8, 9, 10};
	int array4[] = {1, 2, 4, 8, 16, 6, 7, 8, 9, 10};
	int array5[] = {1, 2, 4, 8, 16, 32, 7, 8, 9, 10};
	int array6[] = {1, 2, 4, 8, 16, 32, 64, 8, 9, 10};
	int array7[] = {1, 2, 4, 8, 16, 32, 64, 128, 9, 10};
	int array8[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 10};
	int array9[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

	int res;

	nComp = 0;
	res = func(array1, sizeof(array1) / sizeof(array1[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n", res);
	printf("O número de comparações necessárias foi de: %d\n", nComp);
	printf("\n");

	nComp = 0;
	res = func(array2, sizeof(array2) / sizeof(array2[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n", res);
	printf("O número de comparações necessárias foi de: %d\n", nComp);
	printf("\n");

	nComp = 0;
	res = func(array3, sizeof(array3) / sizeof(array3[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n", res);
	printf("O número de comparações necessárias foi de: %d\n", nComp);
	printf("\n");

	nComp = 0;
	res = func(array4, sizeof(array4) / sizeof(array4[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n", res);
	printf("O número de comparações necessárias foi de: %d\n", nComp);
	printf("\n");

	nComp = 0;
	res = func(array9, sizeof(array9) / sizeof(array9[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n", res);
	printf("O número de comparações necessárias foi de: %d\n", nComp);
	printf("\n");
}

int func(int array[], int size)
{
	int res = 0;
	int r;

	if (size <= 2)
	{
		printf("The array must have 3 elements or more.");
	}
	else
	{
		int razao = array[1] / array[0];
		for (int i = 1; i < size - 1; i++)
		{
			nComp++;

			if (array[i] != (array[i - 1] * razao))
			{
				return 0;
			}
		}
		return 1;
	}
	return -1;
}
// ctrl+shift+i