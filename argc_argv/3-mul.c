#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 */
int main(int argc, char *argv[])
{
    int r;
    argc = 1;
    r = atoi(argv[argc]) *atoi(argv[argc + 1]);
    printf("%d\n", r);
    return (0);
}
