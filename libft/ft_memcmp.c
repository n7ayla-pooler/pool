int     ft_memcmp(void *s1, void *s2, int n)
{
    int i;
    unsigned char *st1 = (unsigned char*)s1;
    unsigned char *st2 = (unsigned char*)s2;

    i = 0;
    while(i < n)
    {
        if(st1[i] != st2[i])
        {
            return (st1 - st2);
        }
        i++;
    }
    return (0);
}