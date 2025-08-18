#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, int n)
{
    unsigned char *sr = (unsigned char *)s;
    unsigned char cr = c;
    int i = 0;
    while(i < n)
    {
        sr[i] = cr;
        i++;
    }
    return s;
}

/*int main()
{
    char tab[] = "Hello fucking warld";
    ft_memset(tab, 97, sizeof(char) * 15);

        printf("%s ", tab);
    
    printf("\n");
    char tab2[] = "Hello fucking wbrld";
    memset(tab2, 97, 15 * sizeof(char));
    
        printf("%s ", tab2);
    
}*/
.
