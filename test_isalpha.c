#include <stdlib.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_isalpha(*argv[1]));
	return (0);
}	
