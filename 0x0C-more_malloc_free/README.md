0. Write a function that allocates memory using malloc

1. Write a function that concatenates two strings
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated

If the function fails, it should return NULL

If n is greater or equal to the length of s2 then use the entire string s2

if NULL is passed, treat it as an empty string

2. Write a function that allocates memory for an array, using malloc

3. Write a function that creates an array of integers
The array created should contain all the values from min (included) to max (included), ordered from min to max

Return: the pointer to the newly created array

If min > max, return NULL

If malloc fails, return NULL

4. Write a function that reallocates a memory block using malloc and free

5. Write a program that multiplies two positive numbers
Usage: mul num1 num2

num1 and num2 will be passed in base 10

Print the result, followed by a new line

If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98

num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
