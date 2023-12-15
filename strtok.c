#include <stdio.h>
#include <string.h>

int main (void)
{
	
	char s[] ="this is a sepatated word by space";
	char delim[5]=" ";
	char *trunks;

	trunks=strtok(str, delim);
	
	printf("%s\n",trunks);


	trunks=strtok(str, delim);

        printf("%s\n",trunks)

	return (0);

}

