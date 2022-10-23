#include "main.h"
/**
 * 
 * 
 * 
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *array;

    if (size == 0)
    {
        return(NULL);
    }
    else
    {
        array = malloc(sizeof(char) * size);
        for (i = 0; i < size; i++)
        {
            *(array + i) = c;
        }
    }
    return (array);
}
