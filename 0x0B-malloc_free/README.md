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

## alloc_grid
The alloc_grid function takes two integer parameters: width and height. It returns a pointer to a 2-dimensional array of integers of size height by width.

The function first checks whether width and height are non-negative. If either of them is 0 or negative, the function returns NULL.

Next, the function allocates memory for the rows of the grid. It does this by calling malloc with an argument of height * sizeof(int *), which allocates enough memory to store height pointers to integers. If malloc returns NULL, the function returns NULL to indicate failure.

For each row of the grid, the function then allocates memory for the columns. It does this by calling malloc with an argument of width * sizeof(int), which allocates enough memory to store width integers. If malloc returns NULL, the function frees all of the previously allocated memory and returns NULL to indicate failure.

Finally, the function initializes all of the elements of the grid to 0 and returns a pointer to the grid

## free_grid
This function takes in a 2D grid as a double pointer grid and the height of the grid height. It then iterates over each row of the grid and frees the memory allocated for it using free(). Finally, it frees the memory allocated for the row pointers using free().