#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_isdigit(*argv[1]));
	return (0);
}
