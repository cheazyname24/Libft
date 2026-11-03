#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count);

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Incorrect amount of arguments!\n");
		return (0);
	}
printf("count = %d\nvalue = %c\n", atoi(argv[2]), *argv[1]);
	printf("Before: %s\n", argv[3]);
	ft_memset(argv[3], *argv[1], atoi(argv[2]));
	printf("After : %s\n", argv[3]);
	return (0);
}
