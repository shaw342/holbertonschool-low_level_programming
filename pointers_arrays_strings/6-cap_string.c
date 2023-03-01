#include <stdio.h>
#include "main.h"
char *cap_string(char *a)
{
int i;

for (i = 0; a[i]; i++)
{
if (a[i] == "." || a[i] == ',' 
		|| a[i] == "\"" 
		|| a[i] == " " 
		|| a[i] == "{" 
		|| a[i] == "}"  
		|| a[i] == "(" 
		|| a[i] == ")" 
		|| a[i] == ";" 
		|| a[i] == "!"
		|| a[i] == "\n"
		|| a[i] == "\t")
{
	a[i+1] = (int)a[i+1] - 32;
}

}
return (a);
}
