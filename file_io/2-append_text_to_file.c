#include "main.h"
/**
 *append_text_to_file - appending the text to a new file
 *@filename: - the file name
 *@text_content: - the text we want to append
 *Return: the value true or false
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int f, l;

    if (filename == NULL)
    {
        return(-1);
    }    
    f = open(filename, O_APPEND | O_WRONLY);
    if (f == -1)
    {
        return(-1);
    }
    if (text_content == NULL)
    {
        return(1);
    }
    l = strlen(text_content);
    write(f, text_content, l);
    close(f);
    return(1);
}