#include "main.h"

/**
 * rot13 - Word
 *
 * Description: Words
 *
 * @s: Parameter
 *
 * Return: Return s
*/
char *rot13(char *s)
{
    int l = 0, r;
    char a[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M'};
    char b[] = { 'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char c[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m' };
    char d[] = { 'n','o','p','q','r','s','t','u','v','w','x','y','z' };
    while (s[l] != '\0')
    {
        for(r = 0; r < 13; r++)
        {
            if (s[l] == a[r])
                s[l] = b[r];
            else if (s[l] == b[r])
                s[l] = a[r];
            else if (s[l] == c[r])
                s[l] = d[r];
            else if (s[l] == d[r])
                s[l] = c[r];
        }
            l++;
    }
return (s);
}
