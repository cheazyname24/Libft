#include <stdio.h>
#include <stdlib.h>

int	ft_tolower(int c);

int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc != 2)
		return (0);
	while (argv[1][i])
	{
		printf("%c", ft_tolower(argv[1][i]));
		i++;
	}
	printf("\n");
	return (0);
}
