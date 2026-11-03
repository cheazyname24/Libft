#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *d, const void *s, size_t n);

int	main(int argc, char **argv)
{
	size_t	len;
	char	*dest;

	if (argc != 2)
	{
		printf("Invalid arguments");
		return (0);
	}
	len = strlen(argv[1]) + 1;
	dest = malloc(sizeof(char) * len);
	printf("src: %s\n", argv[1]);
	ft_memcpy(dest, argv[1], len);
	printf("dst: %s\n", dest);
	return (0);
}
