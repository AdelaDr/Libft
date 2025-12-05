#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	// Test 1: print to stdout
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);

	// Test 2: print to stderr
	ft_putchar_fd('B', 2);
	write(2, "\n", 1);

	// Test 3: print to a file
	int	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return (1);
	ft_putchar_fd('C', fd);
	close(fd);

	return (0);
}*/
