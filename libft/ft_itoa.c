#include "libft.h"

void fill(char *nbr, int n, int len)
{
    int i;
    i = len-1;
    while(n)
    {
        nbr[i--] = n % 10 + '0';
        n /= 10;
    }
    nbr[len] = '\0';
}

char *ft_itoa(int n)
{
    int len;
    int nb;
    char *nbr;

    len = 0;
    nb = n;
    while(nb)
    {
        nb /= 10;
        len++;
    }
    nbr = malloc(len+1);
    if(nbr == NULL)
    {
        return NULL;
    }
    fill(nbr, n, len);
    return nbr;
}