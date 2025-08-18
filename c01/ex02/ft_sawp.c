void    ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>
int main(void)
{
    int a = 1;
    int b = 5;
    
    printf("before:\n");
    printf("a = %d\nb = %d\n\n", a, b);
    ft_swap(&a, &b);
    printf("after:\n");
    printf("a = %d\nb = %d\n\n", a, b);
}
