

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(s);
	i = 0;
	j = len - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (j <= i)
		return (NULL);
	len = j - i + 1;
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strncpy(new, &s[i], len);
	new[len] = '\0';
	return (new);
}
