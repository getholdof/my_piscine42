char*   ft_strcapitalize(char* str)
{
    char* p_str;
    int is_first_alpha;

    p_str = str;
    is_first_alpha = 1;
    while (*p_str != '\0')
    {
        if  (*p_str >= '0' && *p_str <='9') 
            is_first_alpha = 0;
        else if  (*p_str >= 'A' && *p_str <='Z')
            is_first_alpha = 0; 
        else if  (*p_str >= 'a' && *p_str <='z') 
        {
            if  (is_first_alpha)
                *p_str = *p_str - ('a' - 'A');
            is_first_alpha = 0;
        }
        else
            is_first_alpha = 1;
            
       p_str++;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char s2[] = "HELLO world 123abc";
    char s3[] = "cOdInG iS fUn!!!";
    char s4[] = "";
    
    printf("'%s'\n", ft_strcapitalize(s1));
    printf("'%s'\n", ft_strcapitalize(s2));
    printf("'%s'\n", ft_strcapitalize(s3));
    printf("'%s'\n", ft_strcapitalize(s4));
}

