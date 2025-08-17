#include <stdio.h>

void *ft_memmove(void *dest, const void *src, int n)
{
    unsigned char *d = (unsigned char*)dest;
    const unsigned char *s = (const unsigned char *)src;
    unsigned char buff[n];
    int i;
    i = 0;
    while(i < n)
    {
        buff[i] = s[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        d[i] = buff[i];
        i++;
    }
    return dest;
}

/*int main()
{
    int tab[] = {1, 2, 3, 4};
    int dest[4];
    ft_memmove(tab, tab+2, sizeof(int) * 2);
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", tab[i]);
    }
}*/