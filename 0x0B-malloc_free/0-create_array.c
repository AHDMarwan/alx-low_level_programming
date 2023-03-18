#include "main.h"

/**
The create_array function takes two arguments: size, which is the number of chars to allocate, and c, which is the character used to initialize the array. The function first checks if size is zero and returns NULL if it is. It then allocates memory for the array using malloc and checks if the allocation was successful. If the allocation fails, the function returns NULL.

Next, the function initializes each element of the array with the given char c using a for loop. Finally, it returns a pointer to the array.

Note that the caller is responsible for freeing the memory allocated by create_array when it is no longer needed, using the free function
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*While for array*/
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}

}

