int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	int	factorial;

	factorial = nb * ft_recursive_factorial(nb-1);
	return factorial;
}

#include <stdio.h>
int main(void)
{
        int nb;

        nb = 0;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 1;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = -1;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 2;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 3;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 4;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 5;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 6;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 7;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 8;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 9;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

        nb = 10;
        printf("!%d = %d\n\n", nb, ft_recursive_factorial(nb));

}
