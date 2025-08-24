int ft_iterative_factorial(int nb)

{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);

	int factorial;
	
	factorial = 1;
	while(nb >= 2)
	{
		factorial = factorial * (nb);
		nb--;
	}
	return factorial;
}

#include <stdio.h>
int main(void)
{
	int nb;
	
	nb = 0;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 1;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = -1;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 2;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 3;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 4;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 5;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 6;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 7;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 8;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 9;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));

	nb = 10;
	printf("!%d = %d\n\n", nb, ft_iterative_factorial(nb));


}
