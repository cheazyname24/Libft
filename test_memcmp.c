#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Incorrect amount of arguments!\n");
		return (0);
	}
	printf("%d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
