# Malloc Free
malloc and free are functions in the C programming language used to allocate and deallocate dynamic memory.

malloc stands for "memory allocation" and is used to dynamically allocate a block of memory of a specified size.

free is used to deallocate memory that was previously allocated with malloc.


## create_array
The create_array function takes two arguments: size, which is the number of chars to allocate, and c, which is the character used to initialize the array. The function first checks if size is zero and returns NULL if it is. It then allocates memory for the array using malloc and checks if the allocation was successful. If the allocation fails, the function returns NULL.

Next, the function initializes each element of the array with the given char c using a for loop. Finally, it returns a pointer to the array.

Note that the caller is responsible for freeing the memory allocated by create_array when it is no longer needed, using the free function.


## _strdup
The _strdup function takes a single argument, str, which is the input string to be duplicated. The function first checks if str is NULL and returns NULL if it is. It then allocates memory for the new string using malloc, with the size of the new string set to the length of the input string plus one (to include the null terminator).

If the memory allocation is successful, the function copies the contents of the input string to the newly allocated space using strcpy, and returns a pointer to the new string. If the memory allocation fails, the function returns NULL.

Note that the caller is responsible for freeing the memory allocated by _strdup when it is no longer needed, using the free function.