void ft_sort_int_tab(int* tab, int size)
{
    int i;
    int j;
    int temp;
    
    i = 0;
    while (i < size)
    {   
        temp = tab[i];
        
        j = i;
        while(j < size)
        {
            if(temp > tab[j])
            {
                temp = tab[j];
                tab[j] = tab[i];
                tab[i] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
int main(void)
{
    int size = 10;
    int arr[]={64,34,9,88,21,1,37,0,-34,-627};
    int i;

    printf("Initial array order:\n");
    i=0;
    while(i<size)
    {
        printf("%d",arr[i]);
        if (i == size - 1)
            printf("\n");
        else
            printf(", ");
        i++;
    }

    ft_sort_int_tab(arr, size);

    printf("Ordered array:\n");
    i=0;
    while(i<size)
    {
        printf("%d",arr[i]);
        if (i == size - 1)
            printf("\n");
        else
            printf(", ");
        i++;
    }

}
