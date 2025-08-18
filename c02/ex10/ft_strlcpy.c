unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    j = 0;    
    
    if(size)
    {
        while(src[i] && i< size-1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while(src[j])
        j++;
    return (j);
}

#include <stdio.h>
#include <string.h> // para comparar com strlcpy real
int main(void)
{
    char src[] = "HelloWorld";
    char dest1[20];
    char dest2[20];
    unsigned int ret1, ret2;

    // Test 1: size = 0
    ret1 = ft_strlcpy(dest1, src, 0);
    ret2 = strlcpy(dest2, src, 0);
    printf("[size=0] ft: %u, str: %u | dest1='%s' dest2='%s'\n", ret1, ret2, dest1, dest2);

    // Test 2: size = 1
    ret1 = ft_strlcpy(dest1, src, 1);
    ret2 = strlcpy(dest2, src, 1);
    printf("[size=1] ft: %u, str: %u | dest1='%s' dest2='%s'\n", ret1, ret2, dest1, dest2);

    // Test 3: size = 5
    ret1 = ft_strlcpy(dest1, src, 5);
    ret2 = strlcpy(dest2, src, 5);
    printf("[size=5] ft: %u, str: %u | dest1='%s' dest2='%s'\n", ret1, ret2, dest1, dest2);

    // Test 4: size = 10 (igual ao tamanho de src + 1 '\0')
    ret1 = ft_strlcpy(dest1, src, 11);
    ret2 = strlcpy(dest2, src, 11);
    printf("[size=11] ft: %u, str: %u | dest1='%s' dest2='%s'\n", ret1, ret2, dest1, dest2);

    // Test 5: size maior que src
    ret1 = ft_strlcpy(dest1, src, 20);
    ret2 = strlcpy(dest2, src, 20);
    printf("[size=20] ft: %u, str: %u | dest1='%s' dest2='%s'\n", ret1, ret2, dest1, dest2);

    return 0;
}

/*
[size=0]  ft: 10, str: 10 | dest1='' dest2=''
[size=1]  ft: 10, str: 10 | dest1='' dest2=''
[size=5]  ft: 10, str: 10 | dest1='Hell' dest2='Hell'
[size=11] ft: 10, str: 10 | dest1='HelloWorld' dest2='HelloWorld'
[size=20] ft: 10, str: 10 | dest1='HelloWorld' dest2='HelloWorld'
*/

