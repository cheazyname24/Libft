#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(int argc, char **argv)
{
	char *str;

	if (argc != 4)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	str = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("%s\n", str);
}
