int	ft_sqrt(int nb)
{
	if ( nb < 0)
		return (-1);
	if (nb == 0 || nb == 1)
		return (nb);

	int k;
	
    k = 1;
	while(k * k <= nb)
	{
		if (k * k == nb)
			return (k);
		k++;
	}
	return (0);
}

#include <stdio.h>
int main (void)
{
	int nbr;

	nbr = -1;
	while(nbr <= 100)
	{
		printf("%d has natural root %d\n", nbr, ft_sqrt(nbr));
		nbr++;
	}
}
