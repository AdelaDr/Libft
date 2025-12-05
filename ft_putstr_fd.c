#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		 return;
	while(*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int main(void)
{
    // Test 1: print to stdout
    ft_putstr_fd("Hello, stdout!", 1);
    write(1, "\n", 1);

    // Test 2: print to stderr
    ft_putstr_fd("Hello, stderr!", 2);
    write(2, "\n", 1);

    // Test 3: print to a file
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return 1;
    ft_putstr_fd("Hello, file!", fd);
    write(fd, "\n", 1);
    close(fd);

    return 0;
}*/
