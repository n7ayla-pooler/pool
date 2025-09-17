char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *sub;
    
    sub = malloc(len+1);
    if(sub == NULL)
    {
        return NULL;
    }
    i = 0;
    while(i < len)
    {
        sub[i] = s[start];
        start++;
        i++;
    }
    sub[i] = '\0';
    return sub;
}