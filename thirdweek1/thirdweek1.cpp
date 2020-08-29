#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	int x = 1;
	while (x <= n - 1)
	{
		int a = 1;
		while (a <= n-x)
		{
			printf(" ");
			a++;
		}
		int b = 1;
		while (b <= 2 * x - 1 )
		{
			printf("*");
			b++;
		}
		x++;
		
		printf("\n");
	}
	int y = 1;
	while (y <= 2*n-1)
	{
		printf("*");
		y++;
	}
	printf("\n");
	int z = 1;
	while (z <= n - 1)
	{
		int c = 1;
		while (c <= z)
		{
			printf(" ");
			c++;
		}
		int d = 1;
		while (d<=2 * n - 1 - 2 * z)
		{
			printf("*");
			d++;
		}
		z++;
		printf("\n");


	}
	return 0;
}