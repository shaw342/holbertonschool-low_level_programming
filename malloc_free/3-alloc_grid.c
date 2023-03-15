#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int y;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	array = malloc(height * sizeof(int*));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (k = 0;k < height;k++)
	{
		array[k] = malloc(width * sizeof(int));

		if (array[k] == NULL)
		{
			for (; k >= 0; k--)
				free(array[k]);

			free(array);
			return (NULL);
		}

	}

	for (i = 0; i < height ; i++)
	{
		for (y = 0; y < width ;y++)
		{
			array[i][y] = 0;
		}
	}	


	return (array);

}
