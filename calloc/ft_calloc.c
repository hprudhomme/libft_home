void *calloc(size_t nmemb, size_t size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);
    if (!(ptr = malloc(sizeof(void) * size)))
		return (NULL);
    ft_bzero(ptr, size)
    return (ptr);
}