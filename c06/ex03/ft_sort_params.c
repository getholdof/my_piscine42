#include <unistd.h>

void    ft_putstr(char *str);
int     ft_strcmp(char *s1, char *s2);
void    ft_str_swap(char **s1, char **s2);

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void    ft_str_swap(char **s1, char **s2)
{
    char *tmp;

    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

void	ft_sort_arrays(int size, char** arr)
{
	int i;

	i = 0;
	while(i < size - 1)
	{
		int j;

		j = 0;
		while(j < size - 1)
		{
			if (ft_strcmp(arr[j], arr[j+1]) > 0)
				ft_str_swap(&arr[j], &arr[j+1]);
			j++;
		}
		i++;

	}
}


int main(int argc, char **argv)
{
    if (argc == 2)
	{
        return (0);
	}
	
	ft_sort_arrays(argc, argv);
    int i;

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}

