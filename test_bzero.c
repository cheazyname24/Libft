#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Invalid number of arguments!");
		return (0);
	}
	printf("Before: %s\n", argv[1]);
	ft_bzero(argv[1], strlen(argv[1]));
	printf("After : %s\n", argv[1]);
	return (0);
}
