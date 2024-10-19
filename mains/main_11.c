#include "../libft.h"

int	main(void)
{
	char		dest[20];
	const char	*src = "Hello, World!";
	size_t		size = 10;
	size_t		result;

	result = ft_strlcpy(dest, src, size);
	printf("\n--- Testing ft_bzero function ---\n\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Copied length: %zu\n", result);
	printf("Specified size: %zu\n", size);
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
