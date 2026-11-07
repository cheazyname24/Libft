#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(int argc, char **argv)
{
	int	num;

	if (argc != 2)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	num	= ft_atoi(argv[1]);
	printf("%d\n", num);
	return (0);
}
