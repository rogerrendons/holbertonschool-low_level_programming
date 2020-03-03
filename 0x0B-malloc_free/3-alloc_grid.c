#include <stdlib.h>
/**
 * alloc_grid - eturns a ptr to a 2 dimen array of int
 * @width: input value int
 * @height: input value int
 * Return: int
*/

int **alloc_grid(int width, int height)
{

	int **Mat;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	Mat = malloc(height * sizeof(int *));

	if (!Mat)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		Mat[i] = malloc(width * sizeof(int));
		if (Mat[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(Mat[j]);
			}
			free(Mat);

			return (NULL);
		}

		for (j = 0; j < height; j++)
		{
			Mat[i][j] = 0;
		}
	}
	return (Mat);
}
