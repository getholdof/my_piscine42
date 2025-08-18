char*   ft_strcat(char *dest, char *src)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char    str[] = "this is awsome!";
    char    str_cp[20];
    
    ft_strcat(str_cp, str);
    printf("%s\n",str_cp);
}
