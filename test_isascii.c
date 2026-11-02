#include <stdio.h>
#include <stdlib.h>

int	ft_isascii(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_isascii(*argv[1]));
	return (0);
}
