#include <stdio.h>
int main()
{
	printf("Please enter a number:");
	int a=1,num;
	scanf_s("%d",&num);
	while (1)
	{
		a++;
		if(num%a==0)
		{
			if(num==a)
			{
				printf("It is a prime number");
				return 0;
			}
			else
			{
				printf("It is not a prime number");
				return 0;
			}
		}
	}
}