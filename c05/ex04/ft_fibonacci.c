int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);

	if (index == 0 || index == 1)
		return (index);
	
	int fib_in_idx;
	
	fib_in_idx = ft_fibonacci(index-2)+ft_fibonacci(index-1);
	
	return (fib_in_idx);
}

#include <stdio.h>
int main(void)
{
    printf("Fib(-1) = %d\n", ft_fibonacci(-1)); // Esperado: -1
    printf("Fib(0)  = %d\n", ft_fibonacci(0));  // Esperado: 0
    printf("Fib(1)  = %d\n", ft_fibonacci(1));  // Esperado: 1
    printf("Fib(2)  = %d\n", ft_fibonacci(2));  // Esperado: 1
    printf("Fib(3)  = %d\n", ft_fibonacci(3));  // Esperado: 2
    printf("Fib(4)  = %d\n", ft_fibonacci(4));  // Esperado: 3
    printf("Fib(5)  = %d\n", ft_fibonacci(5));  // Esperado: 5
    printf("Fib(10) = %d\n", ft_fibonacci(10)); // Esperado: 55

    return 0;
}
