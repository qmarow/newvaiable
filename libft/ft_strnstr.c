#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
    size_t	i;
	size_t	a;

	i = -1;
	if (!*l)
		return ((char*)big);
    while (*((char*)big + ++i) != '\0' && len)
    {
		a = 0;
		while ((*((char*)big + i + a) == *((char*)l + a)) && len)
        {
        	if (*((char*)big + i + a) == *((char*)l + a) && *((char*)l + a + 1) == '\0')
				return (((char*)big + i));	
		    ++a;
            --len;
        }
    	--len;
    }
    return(NULL);
}