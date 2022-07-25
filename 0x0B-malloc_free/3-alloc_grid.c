#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimenstional
 *  array of intergers
 *  @width: width of the arry 
 *  @height; height of the array
 *  Return: NULL on failure 
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
			return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j< width; j++)
			gridout[i][j] = 0;

	return (gridout);
}
