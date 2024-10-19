
#include "../libft.h"

void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(size_t n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	print_memory(const unsigned char *mem, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (mem[i] >= 32 && mem[i] <= 126)
			write(1, &mem[i], 1);
		else
			write(1, ".", 1);
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
}

void	test_memchr(const void *s, int c, size_t n, char *test_name)
{
	void	*result;
	size_t	pos;

	ft_putstr("\nTest ");
	ft_putstr(test_name);
	ft_putstr(":\n");
	ft_putstr("Buscando '");
	write(1, &c, 1);
	ft_putstr("' en: ");
	print_memory(s, n);
	ft_putstr("\nTamaño de búsqueda: ");
	ft_putnbr(n);
	ft_putstr("\n");
	
	result = ft_memchr(s, c, n);
	
	if (result)
	{
		pos = (unsigned char *)result - (unsigned char *)s;
		ft_putstr("Encontrado en posición: ");
		ft_putnbr(pos);
		ft_putstr("\n");
	}
	else
		ft_putstr("No encontrado\n");
	ft_putstr("---------------\n");
}

int	main(void)
{
	const char		*str = "Hola Mundo";
	unsigned char	bytes[] = {1, 2, 3, 4, 5, 'A', 7, 8};
	
	ft_putstr("TEST FT_MEMCHR\n");
	ft_putstr("=============\n");

	// Test 1: Búsqueda en string normal 
	test_memchr(str, 'M', strlen(str), "string normal");

	// Test 2: Búsqueda en array de bytes
	test_memchr(bytes, 'A', 8, "array de bytes");

	// Test 3: Búsqueda limitada (no debería encontrar 'o') 
	test_memchr(str, 'o', 2, "búsqueda limitada");

	// Test 4: Búsqueda de byte nulo 
	test_memchr(str, '\0', strlen(str) + 1, "byte nulo");

	// Test 5: Búsqueda de valor no presente 
	test_memchr(str, 'Z', strlen(str), "valor no presente");

	return (0);
}
