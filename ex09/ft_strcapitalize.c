int	upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	digit(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			upper_case_switch;

	i = 0;
	upper_case_switch = 1;
	while (str[i])
	{
		if (upper(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (upper_case_switch && lower(str[i]))
		{
			str[i] = str[i] - 32;
		}
		upper_case_switch = 0;
		if (!(upper(str[i]) || lower(str[i]) || digit(str[i])))
			upper_case_switch = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "salut, coMment tU vas ? 42mots quaRante-deux; cinquante+et+un";

	printf("Before: %s\n", a);
	ft_strcapitalize(a);
	printf("After: %s\n", a);
}
*/
