int is_in(char c, const char *charset)
{
    int j;
        j = 0;
        while(charset[j])
        {
            if(c == charset[j])
            {
                return 1;
            }
            j++;
        }
        if(c == '\0')
        {
            return 1;
        }
    return 0;
}

char *ft_strchr(char *str, char c)
{
    if(!is_in(c, str))
    {
        return (0);
    }
    int i;

    i = 0;
    while(str[i])
    {
        if(c == str[i])
        {
            return (&str[i]);
        }
        i++;
    }
    if (c == '\0')
    {
        return (&str[i]);
    }
    return (0);
}	
