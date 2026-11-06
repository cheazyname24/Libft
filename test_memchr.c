#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc != 4)
	{
		printf("Incorrect amount of arguments!\n");
		return (0);
	}
	ptr = ft_memchr(argv[1], argv[2][0], atoi(argv[3]));
	if (ptr != NULL)
	{
		printf("Character found: %c\n", *ptr);
		printf("Rest of the string: %s\n", ptr);
		printf("Memory adress: %p\n", (void *)ptr);
	}
	else
		printf("NULL\n");
	return (0);
}
