#include "revert_string.h"

void RevertString(char *str)
{
	int len, i, j;
    char temp;
    len = 0;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    for (i = 0, j = len - 1;i <= j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

