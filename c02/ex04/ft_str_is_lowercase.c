int ft_str_is_lowercase(char* str)
{
    int is_lowercase;

    is_lowercase = 1;
    while(*str != '\0')
    {
        if (!(*str>='a' && *str<='z'))
        {
            is_lowercase = 0;
            break;
        }
        str++;
    }
    return (is_lowercase);
}

#include <stdio.h>
int main(void)
{
    char str1[] = "gho";
    char str2[] = "gHo";
    char str3[] = "getholdof";
    char str4[] = "gEthoLdOf";
    char str5[] = "abc123";
    char str6[] = "123wxz";
    char str7[] = "heLlo42";
    char str8[] = "abcdefghijklmnopqrstuvwxyz";
    char str9[] = "";

    printf("str1:\n");
    printf("%s\n", str1);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str1));

    printf("str2:\n");
    printf("%s\n", str2);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str2));

    printf("str3:\n");
    printf("%s\n", str3);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str3));

    printf("str4:\n");
    printf("%s\n", str4);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str4));

    printf("str5:\n");
    printf("%s\n", str5);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str5));

    printf("str6:\n");
    printf("%s\n", str6);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str6));

    printf("str7:\n");
    printf("%s\n", str7);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str7));

    printf("str8:\n");
    printf("%s\n", str8);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str8));

    printf("str9:\n");
    printf("%s\n", str9);
    printf("is lowercase: %d\n\n", ft_str_is_lowercase(str9));

}
