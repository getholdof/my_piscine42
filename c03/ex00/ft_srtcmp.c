int ft_strcmp(char* s1, char* s2)
{
    while(*s1 != '\0' && *s2 != '\0')
    {    
        if (*s1 != *s2)
            return (*s1 - *s2);
        else
        {
            s1++;
            s2++;
        }
    }
    return (*s1-*s2);
}

#include <stdio.h>
int main(void)
{
    char str1[] = "getholdof";
    char str2[] = "getholdof";
    char str3[] = "fodlohteg";
    char str4[] = "odlohtegf";

    printf("str1 = %s\n", str1); 
    printf("str2 = %s\n", str2);
    printf("result = %d\n\n", ft_strcmp(str1, str2)); 

    printf("str1 = %s\n", str1); 
    printf("str3 = %s\n", str3);
    printf("result = %d\n\n", ft_strcmp(str1, str3)); 

    printf("str1 = %s\n", str1); 
    printf("str3 = %s\n", str4);
    printf("result = %d\n\n", ft_strcmp(str1, str4)); 

}
