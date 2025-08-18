#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}

int main(void)
{
    char str[]="Hello, this is getholdof from planet Earth!";
    ft_putstr(str);
}
