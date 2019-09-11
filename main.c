#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	ft_printbits(unsigned char octet)
{
	int		mask;

	mask = 256;
	while (mask >>= 1)
		(octet & mask) ? write(1, "1", 1) : write(1, "0", 1);
}

int		ft_recursive_factorial(int nb)
{
		if (nb < 0 || nb > 12)
			return (0);
		if (nb > 1)
			return (nb * ft_recursive_factorial(nb - 1));
		else
			return (1);
}

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		main()
{
	printf("%d\n", ft_abs(-2147483648));
	printf("\n");
	printf("%d\n", abs(-2147483648));

	ft_printbits(125);
	printf("\n");
	printf("%d\n", ft_recursive_factorial(5));
	printf("\n");
	printf("%d\n", ft_sqrt(121));
	return (0);
}
