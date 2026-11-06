#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main()
{
	char	a[100] = "Bonjour";
	char	b[100] = "Salut";

	printf("Before: %s\n", b);
	ft_strlcpy(b, a, 8);
	printf("After : %s\n", b);
	return (0);
}
