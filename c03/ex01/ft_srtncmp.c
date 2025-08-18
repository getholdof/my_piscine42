int ft_strncmp(char* s1, char* s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while(i < n)
    {
        unsigned char   c1 = (unsigned char)s1[i];
        unsigned char   c2 = (unsigned char)s2[i];

        if (c1 != c2)
            return (c1 - c2);
        if (c1 == '\0')
            return (0);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    char    str1[] = "getholdof";
    char    str2[] = "getholdofish";
    char    str3[] = "fodlohteg";
    char    str4[] = "odlohtegf";
    char    str5[] = "abc";
    char    str6[] = "abcdef";

    printf("str1 = %s\n", str1); 
    printf("str2 = %s\n", str2);
    printf("n to compare = %d\n", 9);
    printf("result = %d\n\n", ft_strncmp(str1, str2, 9)); 

    printf("str1 = %s\n", str1); 
    printf("str2 = %s\n", str2);
    printf("n to compare = %d\n", 10);
    printf("result = %d\n\n", ft_strncmp(str1, str2, 10)); 

    printf("str1 = %s\n", str1); 
    printf("str3 = %s\n", str3);
    printf("n to compare = %d\n", 1);
    printf("result = %d\n\n", ft_strncmp(str1, str3, 1)); 

    printf("str1 = %s\n", str1); 
    printf("str3 = %s\n", str4);
    printf("n to compare = %d\n", 9);
    printf("result = %d\n\n", ft_strncmp(str1, str4, 9)); 

    printf("str1 = %s\n", str5); 
    printf("str3 = %s\n", str6);
    printf("n to compare = %d\n", 3);
    printf("result = %d\n\n", ft_strncmp(str5, str6, 3));
 
    printf("str1 = %s\n", str5); 
    printf("str3 = %s\n", str6);
    printf("n to compare = %d\n", 4);
    printf("result = %d\n\n", ft_strncmp(str5, str6, 4));
 
}
