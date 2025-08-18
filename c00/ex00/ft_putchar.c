#include <unistd.h>


void	ft_putchar(char c)
{
	write(1,&c,1);
}	

int main(void)
{
	ft_putchar('g');
	ft_putchar('E');
	ft_putchar('t');
	ft_putchar('h');
	ft_putchar('o');
	ft_putchar('L');
	ft_putchar('d');
	ft_putchar('O');
	ft_putchar('f');
	ft_putchar('\n');
	
	return (1);
}
