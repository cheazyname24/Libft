#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(int argc, char **argv)
{
	char	*trim;

	if (argc != 3)
	{
		printf("Invalid amount of arguments!\n");
		return (0);
	}
	trim = ft_strtrim(argv[1], argv[2]);
	printf("%s\n", trim);
	return (0);
}
