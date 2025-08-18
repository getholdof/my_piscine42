char* ft_strncpy(char* dest, char* src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while(i < n)
    {
        dest[i] = src[i];       
        i++;
    }
    dest[i + 1] = '\0';
    return (dest);
} 

#include <stdio.h>
int main (void)
{
    char str[]="Hello from gHo!";
    char strncpy[50];
    unsigned int n;

    n = 4;
    ft_strncpy(strncpy, str, n);
    
    printf("This is the orrinal string:\n");
    printf("%s\n", str);
    
    printf("The first %d chars will be\n", n);
    printf("copyed to next string:\n");
    printf("%s\n", strncpy);
}
