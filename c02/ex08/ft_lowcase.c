char*   ft_strlowcase(char* str)
{
    char* p_str = str;

    while(*p_str != '\0')
    {
        if (*p_str >= 'A' && *p_str <= 'Z')
        {
            *p_str = *p_str + ('a'-'A');
        }
        p_str++;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char test1[] = "HELLO, WORLD!";
    char test2[] = "HELLO\nWORLD!";
    char test3[] = "";
    char test4[] = "TeSt\bStRiNg";
    char test5[] = "12A34T56d78S9QoFF0!@#qwerty$9354GhO%^&*()";
    char test6[] = "StRiNg witH a\tTAB";
    char test7[] = "String with a\rCARRIAGE RETURN";
    char test8[] = "CoMbined tEsT wIth 123ABCD!@#";

    printf(" --- Test 1 --- \n");
    printf("Input string:\n%s\n", test1);
    ft_strlowcase(test1);
    printf("Output string:\n%s\n\n", test1);

    printf(" --- Test 2 --- \n");
    printf("Input string:\n%s\n", test2);
    printf("Output string:\n%s\n\n", ft_strlowcase(test2));

    printf(" --- Test 3 --- \n");
    printf("Input string:\n%s\n", test3);
    printf("Output string:\n%s\n\n", ft_strlowcase(test3));

    printf(" --- Test 4 --- \n");
    printf("Input string:\n%s\n", test4);
    printf("Output string:\n%s\n\n", ft_strlowcase(test4));

    printf(" --- Test 5 --- \n");
    printf("Input string:\n%s\n", test5);
    printf("Output string:\n%s\n\n", ft_strlowcase(test5));

    printf(" --- Test 6 --- \n");
    printf("Input string:\n%s\n", test6);
    printf("Output string:\n%s\n\n", ft_strlowcase(test6));

    printf(" --- Test 7 --- \n");
    printf("Input string:\n%s\n", test7);
    printf("Output string:\n%s\n\n", ft_strlowcase(test7));

    printf(" --- Test 8 --- \n");
    printf("Input string:\n%s\n", test8);
    printf("Output string:\n%s\n\n", ft_strlowcase(test8));
}

