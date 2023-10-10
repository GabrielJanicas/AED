#include <assert.h>
#include <stdio.h>

int func(int array[], int size);
static int nComp;

int main(void)
{   
	
	int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int array2[] = {1, 2, 1, 3, 5, 6, 7, 8, 9, 10};
	int array3[] = {1, 2, 1, 3, 2, 6, 7, 8, 9, 10};
	int array4[] = {0, 2, 2, 0, 3, 3, 0, 4, 4, 0};
	int array5[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	int res;

	nComp = 0;
	res = func(array1,sizeof(array1) / sizeof(array1[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n",res);
	printf("O número de comparações necessárias foi de: %d\n",nComp);
	printf("\n");

	nComp = 0;
	res = func(array2,sizeof(array2) / sizeof(array2[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n",res);
	printf("O número de comparações necessárias foi de: %d\n",nComp);
	printf("\n");

	nComp = 0;
	res = func(array3,sizeof(array3) / sizeof(array3[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n",res);
	printf("O número de comparações necessárias foi de: %d\n",nComp);
	printf("\n");

	nComp = 0;
	res = func(array4,sizeof(array4) / sizeof(array4[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n",res);
	printf("O número de comparações necessárias foi de: %d\n",nComp);
	printf("\n");

	nComp = 0;
	res = func(array5,sizeof(array5) / sizeof(array5[0]));
	printf("O número de elementos que respeitam a propriedade é de: %d\n",res);
	printf("O número de comparações necessárias foi de: %d\n",nComp);
	printf("\n");
	
	return 0;
}

int func(int array[], int size) 
{
    assert(size > 2 && "The array must have 3 elements or more.");
    int res = 0;  
	
    for (int i = 1; i < size - 1; i++)
    {
        nComp++;  

        if (array[i] == (array[i - 1] + array[i + 1]))   
        {   
            res++;  
        }
    }
    return res;
}