int	ft_strlen(char *str)
{	
	if (!str)
		return (0);

	int	str_len;
	str_len = 0;
	while(str[str_len])
		str_len++;
	return str_len;

}


#include <stdio.h>
int main(void)
{
	char str[]="gho";
	printf("str = %s\nhas a len of: %d\n\n", str, ft_strlen(str));
}
