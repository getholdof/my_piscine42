#include <unistd.h>
void     ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_hex(char c)
{
    char* hex_chars = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(hex_chars[c/16]);
    ft_putchar(hex_chars[c%16]);
}

char*   ft_putchar_non_printable(char* str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            ft_putchar(str[i]);
        }
        else
            ft_print_hex((unsigned char)str[i]);
        i++;
    }
    return (str);
}

int main(void)
{
    // Teste 1: só texto normal
    char str1[] = "Hello, World!";
    ft_putchar_non_printable(str1);
    write(1, "\n", 1);

    // Teste 2: string com tab e newline
    char str2[] = "Hello\tWorld\n";
    ft_putchar_non_printable(str2);
    write(1, "\n", 1);

    // Teste 3: string com caracteres não-printáveis
    char str3[] = "ABC\x1a" "DEF \x02";
    ft_putchar_non_printable(str3);
    write(1, "\n", 1);

    // Teste 4: string vazia
    char str4[] = "getholdof is only\r gho!";
    ft_putchar_non_printable(str4);
    write(1, "\n", 1);

    // Teste 5: string vazia
    char str5[] = "";
    ft_putchar_non_printable(str5);
    write(1, "\n", 1);
    return 0;
}
