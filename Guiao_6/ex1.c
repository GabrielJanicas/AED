int func1(int m, int n)
{
	if (m == 0 && n == 0)
		return 1;
	return func1(m - 1, n) + func1(m, n - 1); +func1(m - 1, n - 1);
}


int main()
{
    int x = func1(3, 4);
	printf("%d\t",x);
    return 0;
}
