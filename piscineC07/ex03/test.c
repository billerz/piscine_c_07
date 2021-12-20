#include <stdlib.h> 
#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep); 

int main(void) 
{
	int index;
	char	**strs;
	char	*separator;
	char	*result;
	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lml";
	strs[1] = "1234";
	strs[2] = "bill";
	strs[3] = "4321";
	separator = "";
	index = 1;
	while (index < 5)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : #%s#\n", index, result);
		free(result);
		index++;
	}
}
