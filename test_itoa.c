#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(int argc, char **argv)
{
	char	*res;
	if (argc != 2)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	res = ft_itoa(atoi(argv[1]));
	printf("%s\n", res);
	return (0);
}
