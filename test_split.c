#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *str, char sep);

int	main(int argc, char **argv)
{
	char	*str;
	char	sep;
	char	**array;
	int		i;

	if (argc != 3)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	str = argv[1];
	sep = argv[2][0];
	array = ft_split(str, sep);
	i = 0;
	while (array && array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}
