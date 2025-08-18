
int ft_str_is_uppercase(char* str)
{
    int is_uppercase;

    is_uppercase = 1;
    while(*str != '\0')
    {
        if (!(*str >= 'A' && *str <= 'Z'))
        {
            is_uppercase = 0;
            break;
        }
        str++;
    }
    return (is_uppercase);
}

#include <stdio.h>
int  main(void)
{
    char str1[]="GHO";
    printf("str1:\n");
    printf("%s\n", str1);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str1));

    char str2[]="gHo";
    printf("str2:\n");
    printf("%s\n", str2);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str2));

    char str3[]="getholdof";
    printf("str3:\n");
    printf("%s\n", str3);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str3));

    char str4[]="GETHOLDOF";
    printf("str4:\n");
    printf("%s\n", str4);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str4));

    char str5[]="GHO42";
    printf("str5:\n");
    printf("%s\n", str5);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str5));
    
    char str6[]="GH0";
    printf("str6:\n");
    printf("%s\n", str6);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str6));

    char str7[]="@GHO#";
    printf("str7:\n");
    printf("%s\n", str7);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str7));

    char str8[]="GETHOLDOF_#$%&/";
    printf("str8:\n");
    printf("%s\n", str8);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str8));

    char str9[]="";
    printf("str9:\n");
    printf("%s\n", str9);
    printf("is uppercase: %d\n\n", ft_str_is_uppercase(str9));

  

}
