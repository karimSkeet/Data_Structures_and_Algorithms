#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_found_pair(int *arr, int sum, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] + arr[j] == sum)
			{
				write(1, "Pair Found (", 12);
				ft_putnbr(arr[i]);
				ft_putchar(',');
				ft_putnbr(arr[j]);
				ft_putchar(')');
				write(1, "\n", 1);
				return;
			}
			j++;
		}
		i++;
	}
	write(1, "Pair not found\n", 15);
}


int	main(void)
{
	int	arr[] = {5, 2, 6, 8, 1, 9};
	int	len;

	len = sizeof(arr) / sizeof(arr[0]);
	ft_found_pair(arr, 11, len);
}
