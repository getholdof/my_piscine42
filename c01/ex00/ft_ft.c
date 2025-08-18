void    ft_ft(int *nbr)
{
    *nbr = 42;
}

#include <stdio.h>
int main(void)
{
    int nbr;
    nbr = 0;
    printf("before: %d\n", nbr);
    ft_ft(&nbr);
    printf("after: %d\n\n", nbr);

    nbr = 1;
    printf("before: %d\n", nbr);
    ft_ft(&nbr);
    printf("after: %d\n\n", nbr);
    
    nbr = -1;
    printf("before: %d\n", nbr);
    ft_ft(&nbr);
    printf("after: %d\n\n", nbr);
    
    nbr = 982134;
    printf("before: %d\n", nbr);
    ft_ft(&nbr);
    printf("after: %d\n\n", nbr);
    
    nbr = -982134;
    printf("before: %d\n", nbr);
    ft_ft(&nbr);
    printf("after: %d\n\n", nbr);
    
    nbr = 666;
    printf("before: %d\n", nbr);
    ft_ft(&nbr);
    printf("after: %d\n\n", nbr);
}
