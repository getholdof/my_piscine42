int ft_is_prime(int nb)
{
	if(nb <= 1)
		return (0);

	int	i;

	i = 2;
	while(i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	int i;
	
	i = -1;
	while(i <= 100)
	{
		printf("is %d prime? - %d\n", i, ft_is_prime(i));
		i++;
	}
}
