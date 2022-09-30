#include<stdio.h>
/**
 * main - Entry point for c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
long long int longlongintType;
char charType;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
