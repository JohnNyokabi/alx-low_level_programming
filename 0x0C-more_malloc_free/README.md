##0x0C. C - More malloc, free
>>The projects aims at understanding how to use malloc, calloc, realloc and exit functions.

##Requirements
	1). Ubuntu 20.04LTS
	2). gcc

##Descriptions
0). 0-malloc_checked.c - Allocates memory using malloc and returns pointer to the allocated memory. If malloc fails, the program causes a normal termination process with status value (98).

1). 1-string_nconcat.c - The program concatenates 2 strings and returns a pointer that points to a newly allocated space in memory.The function  returns NULL on failure and if NULL is passed, it is treated as an empty string.

2). 2-calloc.c - The program allocates memory for an array using malloc. The memory is set to 0. If size is 0, then the _calloc returns NULL, and if malloc fails, _calloc returns NULL.

3). 3-array_range.c - Creates an array of integers containingall values from min (included) to max (included), ordered from min to max. The program returns pointer to the newly created array. If min > max or if malloc fails, it returns NULL.

4). 100-realloc.c - Reallocates a memory block using malloc and free. The contents will be copied to the newly allocated space, in the range from start of ptr up to the minimum of the old and new sizes.

5). 101-mul.c - The program multiplies 2 positive numbers. If the number of arguments is incorrect, it prints Error,followed by a new line and exit with a status of 98. If num1 and num2 are not composed of digits, Error is printed followed by a new line and exit with a status of 98.
