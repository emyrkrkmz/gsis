#include <stdio.h>

int	main(int argc,char **argv) //girdiyi terminalde almak için
{
	if (argc < 2)
	{
		printf("Eksik girdi");
		return (0);
	}
	int	x = 0;
	char	s;
	while (argv[1][x] != '\0') //Stringin sonuna kadar şartı
	{
		if(argv[1][x] != 'z' && argv[1][x] != 'Z')
			s = argv[1][x] + 1; //Ascii olarak sonraki karakteri getirmek için
		else
			printf("%c", argv[1][x] - 25); //z için başa donsun diye
		printf("%c", s);
		x++;
	}
	return (0);
}
