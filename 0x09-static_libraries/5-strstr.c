#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates the first occurence of a needle in haystack
 * @haystack: where to look
 * @needle: what to look for
 *
 *
 * Return: pointer to beginning of the located substring or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
