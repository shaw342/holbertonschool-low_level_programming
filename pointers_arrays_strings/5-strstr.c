#include <stdio.h>
#include "main.h"
char *_strstr(char *haystack,char *needle)
{
	while (*haystack != '\0')
	{
        if(*needle == *haystack)
        {
          return (haystack);
        }
     haystack++;
     }


return (NULL);
}
