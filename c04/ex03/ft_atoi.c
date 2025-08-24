int	ft_atoi(char* str)
{
	if (!str)
		return 0;

	int signal;
	int result;

	signal = 1;
	result = 0;
	while((*str >= 9 && *str <= 13) || *str == ' ')
		str++;

	while(*str == '+' || *str == '-')
		if(*str == '-')
		{
			signal = -signal;
			str++;
		}

	while(*str >= '0' && *str <= '9')
	{
		result = (result * 10) + *str - '0';
		str++;
	}
	return (result * signal);
}

#include <stdio.h>
int	main(void)
{
	printf("---   Test01   ---\n");
	char str[] = "42";
	printf("str = %s\nint = %d\n\n", str, ft_atoi(str));

	printf("---   Test02   ---\n");
	char str1[] = "-42";
	printf("str = %s\nint = %d\n\n", str1, ft_atoi(str1));

	printf("---   Test03   ---\n");
	char str2[] = "";
	printf("str = %s\nint = %d\n\n", str2, ft_atoi(str2));

	printf("---   Test04   ---\n");
	char str3[] = "23748";
	printf("str = %s\nint = %d\n\n", str3, ft_atoi(str3));

	printf("---   Test05   ---\n");
	char str4[] = "0";
	printf("str = %s\nint = %d\n\n", str4, ft_atoi(str4));

	printf("---   Test05   ---\n");
	char str5[] = "-67523";
	printf("str = %s\nint = %d\n\n", str5, ft_atoi(str5));

	printf("---   Test06   ---\n");
	char str6[] = "getholdof";
	printf("str = %s\nint = %d\n\n", str6, ft_atoi(str6));


}
