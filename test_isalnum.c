#include <stdio.h>
#include <stdlib.h>

int	ft_isalnum(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_isalnum(*argv[1]));
	return (0);
}
