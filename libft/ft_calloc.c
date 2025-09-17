void *calloc(size_t nmemb, size_t size)
{
    if(nmemb == 0 || size == 0)
    {
        size = 1;
        nmemb = 1;
    }
    void *alc;
    alc = malloc(nmemb * size);
    if(alc == NULL)
    {
        return NULL;
    }
    bzero(alc, nmemb * size);
    return (alc);
}