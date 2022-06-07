#include <stdio.h>

/**
 *main - return type
 *Return: 0
 */
int main ()
{
	printf("size of a char: %ld bytes\n",sizeof(char));
	printf("size of a int: %ld bytes\n",sizeof(int));
	printf("size of a long int: %ld bytes\n",sizeof(long int));
	printf("size of a long long int: %ld bytes\n",sizeof(long long int));
	printf("size of a float: %ld bytes\n",sizeof(float));
	
	return (0);
}

