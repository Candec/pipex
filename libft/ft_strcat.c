#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	start;

	i = 0;
	start = ft_strlen(s1);
	while (s2[i])
	{
		s1[i + start] = s2[i];
		i++;
	}
	s1[i + start] = '\0';
	return (s1);
}
