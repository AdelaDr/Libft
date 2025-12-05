#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t items, size_t size)
{
    size_t total = items * size;
    unsigned char *ptr = malloc(total);

    if (!ptr)
        return (NULL);

    size_t i = 0;
    while (i < total)
    {
        ptr[i] = 0;
        i++;
    }

    return (ptr);
}

int main(void)
{
    int numItems = 15;
    int *myArray = ft_calloc(numItems, sizeof(int));

    for (int i = 0; i < numItems; i++)
        printf("%d\n ", myArray[i]);

    free(myArray);
    return 0;
}
