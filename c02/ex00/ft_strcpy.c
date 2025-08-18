char*   ft_strcpy(char* dest, char* src)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    dest++;
    *dest = '\0';
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char str[]="Hi! This is gHo..";
    char strcpy[50];

    ft_strcpy(strcpy, str);
    
    printf("this is the original string (str):\n");
    printf("\"%s\n\"", str);

    printf("this is the copyed string (strpcy):\n");
    printf("%s\n", strcpy);
}
