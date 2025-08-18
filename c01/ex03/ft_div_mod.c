void    ft_div_mod(int a, int b, int* div, int* mod)
{
    *div = a / b;
    *mod =a % b;
}


#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int division;
    int rest;

    a = 15;
    b = 5;
    printf("Inputs:\n");
    printf("a = %d\nb = %d\n", a, b);
    ft_div_mod(a, b, &division, &rest);
    printf("Outputs:\n");
    printf("division = %d\nrest = %d\n", division, rest);
}
