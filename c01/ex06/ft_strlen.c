int ft_strlen(char *str)
{
    unsigned int len;
    len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return (len);
}

#include <stdio.h>
int main(void)
{
    char str[]="Hello, this is getholdof from planet Earth!";
    unsigned int str_len;
    str_len = ft_strlen(str);
    printf("The following string\n\"%s\"\nhas a length of %d chars\n", str, str_len);
    return (1); 
}
