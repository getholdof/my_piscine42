#include <unistd.h>

void	ft_putstr(char* str)
{
	while(*str)
	{	
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char** argv)
{
	if (argc < 2)
		return (0);
	
	int i;

	i = argc-1;
	while(i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
