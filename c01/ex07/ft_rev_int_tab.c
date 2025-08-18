void    ft_rev_int_tab(int* tab, int size)
{
    int i;
    int j;
    
    i = 0;
    j = size - 1;

    while(i < j)
    {
        int swap;
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
}

#include <stdio.h>
int main(void)
{
    int size = 5;
    int arr[]={15,27,39,4,93};
    int i;

    i=0;
    printf("initial order of the array:\n");
    while(i<size)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(arr, size);
    
    i=0;
    printf("reversed order of the array:\n");
    while(i<size)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    printf("\n");
}
