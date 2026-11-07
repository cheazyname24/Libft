#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *src);

int	main(int argc, char **argv)
{
	char *dup;

	if (argc != 2)
	{
		printf("Incorrect amount of arguments!\n");
		return (0);
	}
	printf("Original : %s\n", argv[1]);
	dup = ft_strdup(argv[1]);
	printf("Duplicate: %s\n", dup);
	return (0);
}
