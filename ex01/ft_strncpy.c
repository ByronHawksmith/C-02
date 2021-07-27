/* If we were to get the lengths of both strings we could
 * prevent stack smashing by checking
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		if (!dest)
			*dest = '\0';
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest - n);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*a;
	char	b[10];

	a = "sdfgsdfgsdfgsdfgsfdg";
	ft_strncpy(b, a, 5);
	printf("%s\n", a);
	printf("%s\n", b);
}
*/
