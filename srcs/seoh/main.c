
#include "libft.h"
#include <stdio.h>

int main()
{
	char **a = ft_split("12345", 6);
	char **b = ft_split("", 'c');
	char **c = ft_split("", 0);
	char **d = ft_split("123", '\0');
	
	char **aa = s("12345", 6);
	char **bb = split("", 'c');
	char **cc = split("", 0);
	char **dd = split("123", '\0');
	
	printf("ft_split : %s %s %s %s\n", *a, *b, *c, *d);
	printf("original : %s %s %s %s\n", *a, *b, *c, *d);
	return 0;
}