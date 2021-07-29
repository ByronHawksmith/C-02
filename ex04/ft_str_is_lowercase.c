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
	int a = ft_str_is_lowercase("HELLO");
	int b = ft_str_is_lowercase("hello!");
	int c = ft_str_is_lowercase("hello0");
	int d = ft_str_is_lowercase("hello");
	printf("HELLO: %d\n", a);
	printf("hello!: %d\n", b);
	printf("hello0: %d\n", c);
	printf("hello: %d\n", d);
}
*/
