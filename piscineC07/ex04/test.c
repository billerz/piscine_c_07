#include <stdbool.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <unistd.h> 
#define NO_MATCH -1

int ft_str_length(char *str); 
int compute_number_length(unsigned int number, int radix, bool negative); 

bool is_space(char c); 
bool is_base_valid(char *str);

int resolve_base(char *base, char match); 
char *ft_buffer_base(char *base, unsigned int number, bool negative); 
char *ft_convert_base(char *nbr, char *base_from, char *base_to); 

int main(void) 
{
	printf("result : $%s$\n", ft_convert_base("42", "0123456789", "01"));
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
	return (0);
}
