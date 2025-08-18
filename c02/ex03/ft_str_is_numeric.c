#include <stdio.h>

int ft_str_is_numeric(char* str)
{
    int is_numeric;
    
    is_numeric =1;
    while(*str != '\0')
    {
        if(!(*str >= '0' && *str <= '9'))
        {
            is_numeric = 0;
            break;
        }
        str++;
    }
    return (is_numeric);
}

int main(void)
{
    char str1[] = "1234567890";
    char str2[] = "123456789o";
    char str3[] = "!Z3AS67890";
    char str4[] = "1, 2, 3, 4, 5, 6, 7, 8, 9, 0";
    char str5[] = "dont'put your credentials here";
    char str6[] = "324";
    char str7[] = "-324";
    char str8[] = "23-05-1894";
    char str9[] = "";

    printf("str1:\n");
    printf("%s\n", str1);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str1));
     
    printf("str2:\n");
    printf("%s\n", str2);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str2));
     
    printf("str3:\n");
    printf("%s\n", str3);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str3));
     
    printf("str4:\n");
    printf("%s\n", str4);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str4));
     
    printf("str5:\n");
    printf("%s\n", str5);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str5));
     
    printf("str6:\n");
    printf("%s\n", str6);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str6));
     
    printf("str7:\n");
    printf("%s\n", str7);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str7));
     
    printf("str8:\n");
    printf("%s\n", str8);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str8));
     
    printf("str9:\n");
    printf("%s\n", str9);
    printf("is numeric: %d\n\n", ft_str_is_numeric(str9));
     
}
