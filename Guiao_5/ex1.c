#include <stdio.h>

unsigned int func1(unsigned int n);
unsigned int func2(unsigned int n);
unsigned int func3(unsigned int n);

static int calls;

int main(void)
{
	unsigned int res;

	for (int i = 0; i < 65; i++)
	{
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

unsigned int func1(unsigned int n)
{
	calls++;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (int)func1(n / 2) + n;
	}
}

unsigned int func2(unsigned int n)
{
	calls++;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (int)func2(n / 2) + (int)func2(n / 2) + n;
	}
}

unsigned int func3(unsigned int n)
{
	calls++;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		if (n % 2 == 0)
		{
			return 2 * (int)func3(n / 2) + n;
		}
		else
		{
			if (n % 2 == 0)
			{
				return 2 * (int)func3(n / 2) + n;
			}
			else
			{
				return (int)func3((n) / 2) + (int)func3((n) / 2) + n;
			}
		}
	}
}
