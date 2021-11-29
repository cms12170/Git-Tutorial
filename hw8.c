# include <stdio.h>
# define len 50
int main()
{
	char str[len];
	int i;

	printf("input>");
	gets(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("Output> %s\n", str);

	return 0;
}
