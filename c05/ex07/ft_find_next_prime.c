int ft_is_prime(int nbr)
{
	if (nbr <= 1)
		return (0);

	int	i;
	i = 2;
	while(i < nbr)
	{
		if(nbr % i ==0)
			return (0);
		i++;
	}
	return (1);
}


int ft_find_next_prime(int nbr)
{
	while(nbr)
	{
		if(ft_is_prime(nbr))
			return (nbr);
		nbr++;
	}
	return(0);
}

#include <stdio.h>
int main(void)
{
	int nbr;
	
	nbr = -1;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 0;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 1;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 2;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 3;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 6;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 10;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 28;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));

	nbr = 1983;
	printf("the next prime after %d is the number %d\n", nbr, ft_find_next_prime(nbr));



}
