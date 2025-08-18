#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_combn(int nb)
{
	int i;
	int comb[nb];
	int is_last;

	if (nb <= 0 || nb >= 10)
			return;

	i=0;
    while (i < nb)
    {
        comb[i] = i;
        i++;
    }   
    while (1)
    {
        i = 0;
        while(i < nb)
        {
            char c = comb[i] + '0';
            ft_putchar(c);
            i++;
        }
        
	    is_last = 1;
        i = nb - 1;

        while (i >= 0)
        {
            if (comb[i] != 9 - (nb - 1 - i))
            {
                is_last = 0;
                break;
            }
            i--;
        }
        if(is_last)
        {
            ft_putchar('\n');
            break;
        }
        ft_putchar(',');
        ft_putchar(' ');

        comb[i]++;
        int j;
        j= i + 1;
        while(j < nb)
        {
            comb[j] = comb[j - 1] + 1;
            j++;
        } 
    }
}

int main(void)
{
    int nb;

    nb = 1;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 2;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 3;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 4;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 5;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 6;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 7;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');

    nb = 8;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');
    
    nb = 9;
    ft_print_combn(nb);
    ft_putchar('\n');
    ft_putchar('\n');
 
}


