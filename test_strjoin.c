#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(int argc, char **argv)
{
	char	*join;

	if (argc != 3)
	{
		printf("Incorrect amount of argument!\n");
		return (0);
	}
	join = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", join);
	return (0);
}
