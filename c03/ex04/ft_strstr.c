char*   ft_strstr(char* str, char* to_find)
{
    unsigned int    i;
    unsigned int    j;
    
    if (!to_find)
        return str;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            while(str[i+j] == to_find[j])
            {
                if (to_find[j+1] == '\0')
                    return (str + i);
                j++;
            }
        }
        j = 0;
        i++;
    }
    return (0); 
}

#include <stdio.h>
int main(void)
{
    char    str[] = "hey getholdof this is a mad mad world..";
    char    to_find[] = "getholdof";

    printf("%s\n", ft_strstr(str, to_find));
    printf("%p\n", ft_strstr(str, to_find));
}
