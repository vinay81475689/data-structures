
#include<stdio.h>

void main()
{
	int i, n;

	printf("Enter the value of n\t");
	scanf("%d", &n);

	printf("Printing natural numbers from 1 to %d\n", n);

	i = 1;
	do
	{
		printf("%d\t", i);
		i++;
	}while(i <= n);

	printf("\n");
}
