int	lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	digit(char c)
{
	return (c >= '0' && c <= '9');
}

int printable(char c)
{
	return (lower(c) || upper(c) || digit(c));
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			upper_case_switch;

	i = 0;
	upper_case_switch = 1;
	while (str[i])
	{
		if (upper_case_switch && lower(str[i]))
		{
			str[i] = str[i] - 32;
		}
		upper_case_switch = 0;
		if (!printable(str[i]))
			upper_case_switch = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s\n", a);
	ft_strcapitalize(a);
	printf("After: %s\n", a);
}
*/
