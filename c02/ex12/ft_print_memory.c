#include <unistd.h>

void print_address(void* addr)
{
    unsigned long address = (unsigned long)addr;
    char hex_digits[] = "0123456789abcdef";
    char buffer[17];
    int i;
    
    i = 15;
    buffer[16] = '\0';
    while(i >= 0)
    {
        buffer[i] = hex_digits[address % 16];
        address /= 16;
        i--;
    }
    write(1, buffer, 16);
    write(1, ": ", 2);
}

void print_hex_line(unsigned char* ptr, unsigned int size)
{
    char hex_digits[] = "0123456789abcdef";
    unsigned int i;
    
    i = 0;
    while(i < size)
    {   
        if (i < size)
        {
            write(1, &hex_digits[ptr[i] / 16], 1);
            write(1, &hex_digits[ptr[i] % 16], 1);
        }
        if (size % 2 == 1)
            write(1, "  ", 2);
 
        if (i % 2 == 1 && i < size - 1)  // Space after every 2 bytes (4 hex digits)
            write(1, " ", 1);
        i++;
    }
    if (size < 16)
        write(1, "    ", 4);
}

void print_ascii_line(unsigned char* ptr, unsigned int size)
{
    unsigned int i;
    
    i = 0;
    while (i < size)
    {
        if (ptr[i] >= 32 && ptr[i] <= 126)
            write(1, &ptr[i], 1);
        else
            write(1, ".", 1);
        i++;
    }
}

void* ft_print_memory(void* addr, unsigned int size)
{
    unsigned char* ptr = (unsigned char*)addr;
    
    if(!addr || size == 0)
        return addr;

    print_address(ptr);
    print_hex_line(ptr, size);
    write(1, " ", 1);  // Single space between hex and ASCII
    print_ascii_line(ptr, size);
    write(1, "\n", 1);


    return addr;
}

int main(void)
{
    long unsigned int size;

    size = 16;
    char str_test[] = "getholdof is back!";
    char empty[] = "";
    char str[] = "Bonjour les amin----";
    char str1[] = "ches\t\n\tc  est fo----";
    char str2[] = "u\ttout\tce qu on ----";
    char str3[] = "peut faire avec\t----";
    char str4[] = "\n\tprint_memory\n\n----";
    char str5[] = "\n\tlol.lol\n \0";
    
    ft_print_memory((void *)empty, sizeof(empty));
    
    ft_print_memory((void *)str_test, sizeof(str_test) - 1 < size ? size = sizeof(str_test) : size);
   
    ft_print_memory((void *)str, sizeof(str) - 1 < size ? size = sizeof(str) : size);
    
    ft_print_memory((void *)str1, sizeof(str1) - 1 < size ? size = sizeof(str1) - 1 : size);
    
    ft_print_memory((void *)str2, sizeof(str2) - 1 < size ? size = sizeof(str2) - 1 : size);
    
    ft_print_memory((void *)str3, sizeof(str3) - 1 < size ? size = sizeof(str3) - 1 : size);
    
    ft_print_memory((void *)str4, sizeof(str4) - 1 < size ? size = sizeof(str4) - 1 : size);
    
    ft_print_memory((void *)str5, sizeof(str5) - 1 < size ? size = sizeof(str5) - 1 : size);
    
    return 0;
}
