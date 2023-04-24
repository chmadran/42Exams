/* Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100 */


#include <unistd.h>

void	ft_printbits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	while (i >= 0)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
		i--;
	}
}

unsigned char	ft_swapbits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	ft_printbits(1);
	write(1, "\n", 1);
	ft_printbits(ft_swapbits(1));
}
