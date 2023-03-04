#include <stdio.h>
#include "main.h"
char *_strstr(char *haystack,char *needle)
{
  int i;
  int l;

  
  for (i = 0;haystack[i];i++)
    {
      for (l = 0;needle[l];l++)
        {
          if(haystack[i+1] == needle[l+1]){
            return (haystack + i);
          }
         else if(haystack[i] == needle[l] && haystack[i+1] == needle[l+1])
          {

            return (NULL);
          }else{
            return (NULL);
          }
        }
      
    }

  

return (NULL);
}
