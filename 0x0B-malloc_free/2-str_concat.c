#include "main.h"
#include <stdlib.h>
/**
*str_concat - the string
*@s1: string 1
*@s2: string 2
*
*Return: Null on failure, pointer on success
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, len1, len2;
char *cat; /*will be the third string */

i = 0;
j = 0;
len1 = 0;
len2 = 0;

if (s1 == NULL)
return (NULL);

if (s2 == NULL)
return (NULL);

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

cat = malloc(sizeof(char) * (len1 + len2 + 1));

if (cat == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
cat[i] = s1[i];

for (j = 0; s2[j] != '\0'; j++, i++)
cat[i] = s2[j];

cat[i] = '\0';

return (cat);
}
