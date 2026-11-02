#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
