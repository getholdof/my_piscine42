int ft_str_is_printable(char* str)
{
    int  is_printable;

    is_printable = 1;
    while(*str != '\0')
    {
        if (*str <= 31 || *str == 127)
        {
            is_printable = 0;
            break;
        }
        str++;
    }
    return (is_printable);

}

#include <stdio.h>
int main(void)
{
 // --- Test Cases ---
    char *test1 = "Hello, World!";
    char *test2 = "Hello\nWorld!";
    char *test3 = "";
    char *test4 = "Test\bString";
    char *test5 = "1234567890!@#$%^&*()";
    char *test6 = "String with a\ttab";
    char *test7 = "String with a\rcarriage return";
    char *test8 = "Combined test with 123!@#";

    // Use a ternary operator to print the result in a single line.
    printf("Testing string: \"%s\"\n", test1);
    printf("  Result: %s\n\n", ft_str_is_printable(test1) ? "passed" : "failed");

    printf("Testing string: \"Hello\\nWorld!\"\n");
    printf("  Result: %s\n\n", ft_str_is_printable(test2) ? "passed" : "failed");

    printf("Testing string: \"\" (empty string)\n");
    printf("  Result: %s\n\n", ft_str_is_printable(test3) ? "passed" : "failed");

    printf("Testing string: \"Test\\bString\"\n");
    printf("  Result: %s\n\n", ft_str_is_printable(test4) ? "passed" : "failed");

    printf("Testing string: \"%s\"\n", test5);
    printf("  Result: %s\n\n", ft_str_is_printable(test5) ? "passed" : "failed");

    printf("Testing string: \"String with a\\ttab\"\n");
    printf("  Result: %s\n\n", ft_str_is_printable(test6) ? "passed" : "failed");

    printf("Testing string: \"String with a\\rcarriage return\"\n");
    printf("  Result: %s\n\n", ft_str_is_printable(test7) ? "passed" : "failed");

    printf("Testing string: \"%s\"\n", test8);
    printf("  Result: %s\n\n", ft_str_is_printable(test8) ? "passed" : "failed");

    return 0;

}
