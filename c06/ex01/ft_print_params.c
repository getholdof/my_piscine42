#include <unistd.h>
void	ft_putstr(char* str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}


int	main(int argc,char** argv)
{
	if (argc < 2)
		return (0);

	int i;
	
	i = 1;
	while(i <= argc-1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}


