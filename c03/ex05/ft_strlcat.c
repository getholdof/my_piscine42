unsigned int ft_str_len(char* str)
{
    unsigned int    str_len;

    str_len = 0;
    while(str[str_len] != '\0')
        str_len++;
    return str_len;
}


unsigned int    ft_strlcat(char* dest, char* src, unsigned int size)
{
    unsigned int    len_src;
    unsigned int    len_dest;
    
    len_src = ft_str_len(src);
    
    unsigned int    i;

    i = 0;
    while (i < size && dest[i] != '\0')
    {
        i++;
    }
    len_dest = i;

    if (len_dest == size)
        return (len_dest + size);
    
    unsigned int available_space;

    available_space = size - len_dest - 1;
    
    unsigned int j;

    j = 0;
    while (j < available_space && src[j] != '\0')
    {
        dest[len_dest + j] = src[j];
        j++;
    }
    if (len_dest < size)
        dest[len_dest + j] = '\0';

    return (len_dest + len_src);
}


#include <stdio.h>
int main(void)
{
	char buffer[20] = "Hello";
	char small[10] = "Hi";
    char gho[5] = "gho-";

	unsigned int r1 = ft_strlcat(buffer, " World", sizeof(buffer));
	printf("Resultado: \"%s\" | Retorno: %u\n", buffer, r1);

	unsigned int r2 = ft_strlcat(small, " There!", sizeof(small));
	printf("Resultado: \"%s\" | Retorno: %u\n", small, r2);

	unsigned int r4 = ft_strlcat(gho, " getholdof!", sizeof(gho));
	printf("Resultado: \"%s\" | Retorno: %u\n", gho, r4);
	
    char zero[5] = "";
	unsigned int r3 = ft_strlcat(zero, "abc", 0);
	printf("Resultado: \"%s\" | Retorno: %u\n", zero, r3);

	return (0);
}

