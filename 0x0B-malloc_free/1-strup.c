#include "main.h"
/**
 * *_strdup - returns a pointer to a newy allocated space in memory,
 * which is duplicate of the string
 * @str: pointer to the memory
 * Return: null if str  =NULL
 */
char *strdup(char *str)	
{
	char *strout;
	unsigned int i. j;

	if (str == null)
		return (NULL);

	if (i =  0; str[i] != '\0'; i++)
		;

	strout =(char *)malloc(sizeof(char) * (i+1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}

