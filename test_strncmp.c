#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
