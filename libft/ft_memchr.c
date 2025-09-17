void    *ft_memchr(unsigned char *s, unsigned char c, int n)
{
    int i;
    i = 0;
    while(i < n)
    {
        if(c == s[i])
        {
            return (&s[i]);
        }
        i++;
    }
    return (0);
}