#include<stdio.h>
int main(void)
{
	 
	int arr[5], i;
	printf("5���� ������ �Է��ϼ��� :");
	scanf_s("%d%d%d%d%d", &(arr[0]), &(arr[1]), &(arr[2]), &(arr[3]), &(arr[4]));
	printf("\nȦ�� ���:");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d\t", arr[i]);
	}
	printf("\n¦�� ���:");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d\t", arr[i]);
	}
}