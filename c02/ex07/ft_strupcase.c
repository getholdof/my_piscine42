char*   ft_strupcase(char* str)
{
    char* p_str = str;

    while(*p_str != '\0')
    {
        if (*p_str >= 'a' && *p_str <= 'z')
        {
            *p_str = *p_str - ('a'-'A');
        }
        p_str++;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char test1[] = "Hello, World!";
    char test2[] = "Hello\nWorld!";
    char test3[] = "";
    char test4[] = "Test\bString";
    char test5[] = "12a34T56d78S9qoFF0!@#qwerty$9354GhO%^&*()";
    char test6[] = "String with a\ttab";
    char test7[] = "String with a\rcarriage return";
    char test8[] = "Combined test with 123!@#";
    
    printf(" --- Test 1 --- \n");
    printf("Input string:\n%s\n", test1);
    ft_strupcase(test1);
    printf("Output string:\n%s\n\n", test1);

    printf(" --- Test 2 --- \n");
    printf("Input string:\n%s\n", test2);
    printf("Output string:\n%s\n\n", ft_strupcase(test2));

    printf(" --- Test 3 --- \n");
    printf("Input string:\n%s\n", test3);
    printf("Output string:\n%s\n\n", ft_strupcase(test3));

    printf(" --- Test 4 --- \n");
    printf("Input string:\n%s\n", test4);
    printf("Output string:\n%s\n\n", ft_strupcase(test4));

    printf(" --- Test 5 --- \n");
    printf("Input string:\n%s\n", test5);
    printf("Output string:\n%s\n\n", ft_strupcase(test5));

    printf(" --- Test 6 --- \n");
    printf("Input string:\n%s\n", test6);
    printf("Output string:\n%s\n\n", ft_strupcase(test6));

    printf(" --- Test 7 --- \n");
    printf("Input string:\n%s\n", test7);
    printf("Output string:\n%s\n\n", ft_strupcase(test7));

    printf(" --- Test 8 --- \n");
    printf("Input string:\n%s\n", test8);
    printf("Output string:\n%s\n\n", ft_strupcase(test8));

}
