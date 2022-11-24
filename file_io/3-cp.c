#include "main.h"
/**
 * 
 * 
 * 
 * 
*/
void the_cp(int argc, char **argv)
{
    int f, f1, r, r1, i = 0;
    char *bf;

    if (argc > 3)
    {
        printf("Usage: cp file_from file_to\n");
        exit(97);
    }
    f = open(argv[1], O_RDONLY);
    if (f = -1)
    {
        printf("Error: Can't read from file NAME_OF_THE_FILE\n");
        exit(98);
    }
    f1 = open(argv[2], O_WRONLY | O_TRUNC);
    if (f1 = -1)
    {
        f1 = open(argv[2], O_CREAT | O_WRONLY, 0664);
        if (f1 = -1)
        {
            printf("Error: Can't write to NAME_OF_THE_FILE\n");
            exit(98);
        }
    }
    bf = malloc(1024);
    r = read(f, bf, 1024);
    while (*bf != EOF)
    {
        i = i + 1024;
        bf = realloc(bf, i);
        r = read(f, bf, i);
    }
    dprintf(f1, "%s", bf);
}