#include <unistd.h>
int main(int argc, char** argv)
{
	(void)argc;
	int i;

	i = 2;
	while(argv [0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
