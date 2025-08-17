void *ft_memcpy(void *dest, const void *src, int n)
{
    unsigned char *d = (unsigned char*)dest;
    const unsigned char *s = (const unsigned char *)src;
    int i;
    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }

    return dest;
}

/*int main()
{
    int tab[] = {1, 2, 3, 4};
    int dest[4];
    ft_memcpy(tab, tab+2, sizeof(int) * 2);
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", tab[i]);
    }
}*/