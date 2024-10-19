
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

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	test_strnstr(const char *big, const char *little, 
		size_t len, char *test_name)
{
	char	*result;

	ft_putstr("\nTest ");
	ft_putstr(test_name);
	ft_putstr(":\n");
	ft_putstr("Buscando \"");
	ft_putstr(little);
	ft_putstr("\" en \"");
	ft_putstr(big);
	ft_putstr("\"\n");
	ft_putstr("Límite de búsqueda: ");
	ft_putnbr(len);
	ft_putstr("\n");

	result = ft_strnstr(big, little, len);

	ft_putstr("Resultado: ");
	if (result)
	{
		ft_putstr("Encontrado en posición ");
		ft_putnbr(result - big);
		ft_putstr(" (\"");
		ft_putstr(result);
		ft_putstr("\")");
	}
	else
		ft_putstr("No encontrado");
	ft_putstr("\n---------------\n");
}

int	main(void)
{
	const char	*str = "Hola mundo! Como estas?";
	
	ft_putstr("TEST FT_STRNSTR\n");
	ft_putstr("==============\n");

	// Test 1: Búsqueda normal
	test_strnstr(str, "mundo", ft_strlen(str), "búsqueda normal");

	// Test 2: Búsqueda al inicio
	test_strnstr(str, "Hola", ft_strlen(str), "búsqueda al inicio");

	// Test 3: Búsqueda con len limitado (no debería encontrar) 
	test_strnstr(str, "mundo", 4, "búsqueda limitada");

	// Test 4: Little string vacía 
	test_strnstr(str, "", ft_strlen(str), "little string vacía");

	// Test 5: Substring que no existe 
	test_strnstr(str, "adios", ft_strlen(str), "substring no existe");

	// Test 6: Búsqueda cerca del límite 
	test_strnstr(str, "estas", ft_strlen(str), "búsqueda cerca del fin");

	// Test 7: Len mayor que la longitud de big  
	test_strnstr(str, "mundo", 100, "len mayor que big");

	// Test 8: Coincidencia parcial pero len insuficiente  
	test_strnstr("Hola mundo", "mundo", 6, "len corta coincidencia parcial");

	return (0);
}
