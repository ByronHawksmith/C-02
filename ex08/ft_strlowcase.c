int	char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (char_is_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[6] = "Hello\0";
	char b[7] = "Hello!\0";
	char c[7] = "Hello0\0";

	ft_strlowcase(a);
	ft_strlowcase(b);
	ft_strlowcase(c);
	printf("Hello: %s\n", a);
	printf("Hello1: %s\n", b);
	printf("Hello0: %s\n", c);
}
*/
