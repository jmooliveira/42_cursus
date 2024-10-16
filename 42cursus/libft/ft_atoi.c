#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int ft_atoi(const char *nptr)
{
    unsigned int    ascii_to_int;
    size_t          i;
    int             signal;

    ascii_to_int = 0;
    i = 0;
    signal = 1;
    while (nptr[i])
    {
        //if ()
        ascii_to_int = ascii_to_int * 10 + nptr[i] - '0';
        i++;
    }

    return (ascii_to_int * signal);
}

int main(void)
{
    char    *nbr = "+2147483647";

    printf("%d\n", ft_atoi(nbr));
    printf("%d\n", atoi(nbr));
}