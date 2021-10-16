#include <stdio.h>

void bin_ary(int n)
{
	if (n > 0)
	{
		bin_ary(n / 2);
		printf("%d", n % 2);

	}
}

void main()
{
	int n;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	bin_ary(n);
	
}