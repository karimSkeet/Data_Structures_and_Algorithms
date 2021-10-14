#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	n;

	do {
		printf("Enter a number greater than 0\n");
		scanf("%d", &n);
	}while (n <= 0);

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (i + j + 1 < n)
				printf("  ");
			else
				printf("* ");
			j++;
		}
		i++;
		printf("\n");
	}
	return (0);
}
