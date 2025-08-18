char*   ft_strncat(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    
    i=0;
    while(i < n)
    {
        if (src[i] != '\0')
            dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char    str[] = "this is awsome!";
    char    str_cp[20];
    
    ft_strncat(str_cp, str, 7);
    printf("%s\n",str_cp);
}
