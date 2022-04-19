#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char *aux;

	i= 0;
	aux = av[ac-1];

	if (ac > 1)
	{
		while (aux[i] != '\0')
		{
			write(1,&aux[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
