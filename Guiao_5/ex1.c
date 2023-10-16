#include <stdio.h>

int func1(int n);
int func2(int n);
int func3(int n);

static int calls;

int main(void)
{
	int res;

	for (int i = 1; i < 65; i++)
	{
		printf("%3d: ", i);
		calls = 0;
		res = func1(i);
		printf("Result1: %d\tCalls: %d\t", res, calls);

		calls = 0;
		res = func2(i);
		printf("Result2: %d\tCalls: %d\t", res, calls);

		calls = 0;
		res = func3(i);
		printf("Result3: %d\tCalls: %d\n", res, calls);
	}
	return 0;
}

int func1(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		calls++;
		return func1(n / 2) + n;
	}
}

int func2(int n)
{

	if (n == 1)
	{
		return 1;
	}
	else
	{
		calls += 2;
		return func2(n / 2) + func2((n + 1) / 2) + n;
	}
}

int func3(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		if (n % 2 == 0)
		{
			calls++;
			return 2 * func3(n / 2) + n;
		}
		else
		{
			calls += 2;
			return func3((n) / 2) + func3((n + 1) / 2) + n;
		}
	}
}
