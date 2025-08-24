#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1,"-2",2);
		nb = 147483648;
	}
	
	if (nb < 0)
	{
		write(1,"-", 1);
		nb = -nb;
	}
	
	if (nb >= 10)
		ft_putnbr(nb/10);

	c = (nb % 10) + '0';
	write(1, &c, 1);

	
}

int	main(void)
{
	ft_putnbr(42);
	write(1,"\n",1);

	ft_putnbr(-42);
	write(1,"\n",1);

	ft_putnbr(0);
	write(1,"\n",1);

	ft_putnbr(-2147483648);
	write(1,"\n",1);

	ft_putnbr( 2147483647);
	write(1,"\n",1);

	ft_putnbr(1);
	write(1,"\n",1);

	ft_putnbr(-1);
	write(1,"\n",1);

	ft_putnbr(00000);
	write(1,"\n",1);
}
