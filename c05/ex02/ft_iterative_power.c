int ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	int result;

	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int main(void)
{
    printf("2^0 = %d\n", ft_iterative_power(2, 0));   // Esperado: 1
    printf("2^3 = %d\n", ft_iterative_power(2, 3));   // Esperado: 8
    printf("5^4 = %d\n", ft_iterative_power(5, 4));   // Esperado: 625
    printf("10^2 = %d\n", ft_iterative_power(10, 2)); // Esperado: 100
    printf("3^-2 = %d\n", ft_iterative_power(3, -2)); // Esperado: 0
    printf("0^5 = %d\n", ft_iterative_power(0, 5));   // Esperado: 0
    printf("0^0 = %d\n", ft_iterative_power(0, 0));   // Esperado: 1 (definição comum)

    return 0;
}
