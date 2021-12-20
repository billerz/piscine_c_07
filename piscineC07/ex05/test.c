#include <stdlib.h> 
#include <stdbool.h> 
#include <stdio.h>
char **ft_split(char *str, char *charset); 
int main(int argc, char **argv) 
{
	int index;
	char	**split;
	argc = argc + 0;
	printf("Case: \"%s\" \"%s\"\n", argv[1], argv[2]);
	printf("-----#-split-#-------\n");
	split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("TAB start\n");
	while (split[index])
	{
		printf("TAB[%d]: #%s#\n", index, split[index]);
		index++;
	}
	printf("TAB end\n");
}
