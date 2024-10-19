
#include "../libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_result(char c)
{
	char	result;

	write(1, "Original: '", 11);
	ft_putchar(c);
	write(1, "' -> Minuscula: '", 16);
	result = ft_tolower(c);
	ft_putchar(result);
	write(1, "'\n", 2);
}

int	main(void)
{
	char	test_chars[] = "abcxyzABCXYZ123!@#";
	int		i;

	i = 0;
	write(1, "Prueba de ft_tolower:\n", 21);
	write(1, "-------------------\n", 20);
	while (test_chars[i] != '\0')
	{
		print_result(test_chars[i]);
		i++;
	}
	return (0);
}
