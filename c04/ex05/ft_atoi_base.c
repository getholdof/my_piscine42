int ft_atoi_base(char* str, char* base);
int ft_strlen(char* str);
int	is_valid_base(char* base);
int is_char_in_base(char c, char* base);
int base_n_to_base_10(char c, char* base);

int ft_strlen(char* str)
{
	int	str_len;

	str_len = 0;
	while(str[str_len])
		str_len++;
	return (str_len);
}

int	is_valid_base(char* base)
{
	int base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return(0);
	int	i;

	i = 0;
	while(i < base_len)
	{
		if (base[i] == '+'
			|| base[i] == '-'
			|| base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return(0);
		int j;
		
		j = i+1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


int is_char_in_base(char c, char* base)
{
	while(*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return(0);
}


int base_n_to_base_10(char c, char* base)
{
	int	i;
	
	i = 0;
	while(base[i])
	{
		if (c == base[i])
			break;
		i++;

	}
	return (i);
}

int ft_atoi_base(char* str, char* base)
{
	int signal;
	int base_len;
	int result;

	base_len = ft_strlen(base);
	signal = 1;
	result = 0;

	if(!is_valid_base(base))
		return(0);

	while((*str >= 9 && *str <= 13) || *str == ' ')
		str++;

	while(*str == '+' || *str == '-')
	{
		if(*str == '-')
			signal = -signal;
		str++;
	}
	
	while (is_char_in_base(*str, base))
	{
		result = result * base_len + base_n_to_base_10(*str, base);
		str++;
	}
	
	while(*str)
		str++;
	
	return (result * signal);
}

#include <stdio.h>
int main(void)
{
    // Testes com base decimal
    printf("Decimal:\n");
    printf("1234 (base 10) = %d\n", ft_atoi_base("1234", "0123456789"));
    printf("-5678 (base 10) = %d\n", ft_atoi_base("-5678", "0123456789"));

    // Testes com base binária
    printf("\nBinário:\n");
    printf("1011 (base 2) = %d\n", ft_atoi_base("1011", "01")); // deve dar 11

    // Testes com base hexadecimal
    printf("\nHexadecimal:\n");
    printf("FF (base 16) = %d\n", ft_atoi_base("FF", "0123456789ABCDEF")); // deve dar 255
    printf("-1A3 (base 16) = %d\n", ft_atoi_base("-1A3", "0123456789ABCDEF")); // deve dar -419

    // Testes com base octal
    printf("\nOctal:\n");
    printf("755 (base 8) = %d\n", ft_atoi_base("755", "01234567")); // deve dar 493

    // Base inválida (repetição de caracteres)
    printf("\nBase inválida:\n");
    printf("Resultado: %d\n", ft_atoi_base("123", "1123456789"));

    return 0;
}
