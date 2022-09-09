#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %i byte(s)\n", sizeof(char));
    printf("Size of an int: %i byte(s)\n", sizeof(int));
    printf("Size of a long int: %i byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
    printf("Size of a float: %i byte(s)\n", sizeof(float));
    return (0);
}

8. gcc -S -masm=intel $CFILE
9. #include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
