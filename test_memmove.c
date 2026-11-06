#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main()
{
	char a[100] = "abcdefgh";

	printf("Before: %s\n", a);
	ft_memove(a + 3, a, 8);
	printf("After : %s\n", a);
	return (0);
}
