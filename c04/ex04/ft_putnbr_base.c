#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}


int	ft_strlen(char* str)
{
	int	str_len;

	str_len = 0;
	while(str[str_len])
		str_len++;
	return (str_len);
}


int	is_invalid_base(char* str)
{
	int	str_len;

	str_len = ft_strlen(str);
	if(str_len < 2)
		return(1);
	
	if (*str == '+' || *str == '-')
			return(1);
	
	int	i;

	i = 0;
	while(i < str_len)
	{
		if (*str == '+' || *str == '-')
			return(1);

		int	j;

		j= i + 1;
		while(j < str_len)
		{
			if (str[i] == str[j])
				return(1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char* base)
{
	int	base_len;
	char	c;
	int long	_nbr;

	_nbr = nbr;

	base_len = ft_strlen(base);
	
	if (is_invalid_base(base))
		return;

	if (_nbr < 0)
	{
		write(1,"-",1);
		_nbr = -_nbr;
	}

	if(_nbr / base_len)
	{
		ft_putnbr_base(_nbr / base_len, base);
	}

	c = base[_nbr % base_len];
	ft_putchar(c);
	return;
}

int main(void)
{
	// Teste com base decimal
	write(1, "Decimal: ", 9);
	ft_putnbr_base(12345, "0123456789");
	write(1, "\n", 1);

	// Teste com base binária
	write(1, "Binario: ", 9);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	// Teste com base hexadecimal
	write(1, "Hexadecimal: ", 13);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);

	// Teste com base octal
	write(1, "Octal: ", 7);
	ft_putnbr_base(100, "poneyvif");
	write(1, "\n", 1);

	// Teste com número negativo
	write(1, "Negativo (decimal): ", 21);
	ft_putnbr_base(-1234, "0123456789");
	write(1, "\n", 1);

	// Teste com uma base inválida
	write(1, "Base invalida: ", 15);
	ft_putnbr_base(123, "0"); // Deve imprimir nada
	write(1, "\n", 1);

	return (0);
}	

