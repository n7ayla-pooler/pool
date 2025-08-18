#include <stdio.h>

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

char *ft_strrchr(char *str, char c)
{
    int i;
    i = 0;
    void *p;

    if(!is_in(c, str))
    {
        return NULL;
    }

    while(str[i])
    {
        if(c == str[i])
        {
            p = &str[i];
        }
        i++;
    }
    if(c == '\0')
    {
        p = &str[i];
    }
    return p;
}

/*int main()
{
    char *str = "Hello Fucking world";
    char *s = &str[4];
    char *p = ft_strrchr(str, 'o');
    printf("%p\n", s);
    printf("%p\n", p);
}*/