#include <stdio.h>
/**
 * main - main entry
 * Return: always 0
 */

int main(void)
{
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));

    return (0);
}
