void ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        ft_putchar('-', fd);
        n *= -1;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0', fd);
}