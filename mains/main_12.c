#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char		dest[20] = "Hello ";
	const char	*src = "World!";
	size_t		size = 20;
	size_t		result;

	printf("Before ft_strlcat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %zu\n", size);

	result = ft_strlcat(dest, src, size);

	printf("\nAfter ft_strlcat:\n");
	printf("dest: %s\n", dest);
	printf("Return value: %zu\n", result);

	return (0);
}
