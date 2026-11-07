#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Incorrect amount of arguments!\n");
		return (0);
	}
	char *str = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
	if (str != NULL)
		printf("%s\n", str);
	else
		printf("NULL\n");
	return (0);
}
