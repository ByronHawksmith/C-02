int	char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int a = ft_str_is_lowercase("Hello");
	int b = ft_str_is_lowercase("Hello!");
	int c = ft_str_is_lowercase("Hello0");
	int d = ft_str_is_lowercase("hello");
	printf("Hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("Hello0: %d\n", c);
	printf("hello: %d\n", d);
}
*/
