#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_is_negative(int n)
{
	if(n<0)
	{	
		ft_putchar('N');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('P');
		ft_putchar('\n');
	}
}

int	main(void)
{
	ft_is_negative(0);

	ft_is_negative(1);
	ft_is_negative(-1);
	ft_is_negative(37);
	ft_is_negative(934);
	ft_is_negative(-6780);
	ft_is_negative(-25);
	ft_is_negative(1223);
	ft_is_negative(-8766);
	ft_is_negative(-34);
	ft_is_negative(667);
}
