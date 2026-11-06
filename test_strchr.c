#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	char	*ptr;
	int		c;

	if (argc != 3)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	if (argv[1][0] != '\0' && argv[1][1] == '\0')
		c = argv[1][0];
	else
		c = atoi(argv[1]);
	ptr = ft_strchr(argv[2], c);
	if (ptr != NULL)
	{
		printf("Character found: %c\n", *ptr);
		printf("Rest of the string: %s\n", ptr);
		printf("Memory adress: %p\n", (void *)ptr);
	}
	else
	{
		printf("NULL\n");
	}
	return (0);
}
