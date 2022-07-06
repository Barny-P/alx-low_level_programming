#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 * Return: Always 0
 */
void times_table(void)
{
	int j,i,n;

	for(i=0;i<=9;i++)
	{
		for(j=1;j<=n;j++)
		{
			if (j<=n-1)
				printf("%dx%d = %d, ",j,i,i*j);
			else
			printf("%dx%d = %d",j,i,i*j);

		}
		printf("\n");
	}
}
