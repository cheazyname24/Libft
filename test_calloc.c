#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size);

int	main(int argc, char **argv)
{
	void	*ptr;
	int		i;

	if (argc != 3)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	i = 0;
	ptr = ft_calloc(atoi(argv[1]), atoi(argv[2]));
	if (!ptr)
	{
		printf("Allocation failed!\n");
		return (0);
	}
	while (i < (atoi(argv[1]) * atoi(argv[2])))
	{
		if (((char *)ptr)[i] != '\0')
		{
			printf("FAIL\nIndex %d = 0x%02x\n", i, ((char *)ptr)[i]);
			free(ptr);
			return (0);
		}
		i++;
	}
	printf("SUCCESS\n");
	free(ptr);
	return (0);
}
