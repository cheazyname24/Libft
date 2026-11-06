#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(int argc, char **argv)
{
	size_t	len;
	char	*dest;

	if (argc != 3)
	{
		printf("Invalid arguments!\n");
		return (0);
	}
	len = strlen(argv[1]) + strlen(argv[2]) + 1;
	dest = malloc(sizeof(char) * len);
	printf("src = %s\n", argv[2]);
	printf("dst = %s\n", argv[1]);
	strlcpy(dest, argv[1], strlen(argv[2]));
	ft_strlcat(dest, argv[2], len);
	printf("%s\n", dest);
	return (0);
}
