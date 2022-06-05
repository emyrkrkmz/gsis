#include <stdio.h>

int main()
{
	int	a = 3;
	int	b;

	int	x = 1;
	int	y = 1;
	int	z;
	printf("Istenilen basamagi giriniz: ");
	scanf("%d", &b);

	if(b == 1)
	{
		printf("1");
		return (0);
	}
	if(b == 2)
	{
		printf("1 1");
		return (0);
	}
	printf ("1 1 ");
	while(a <= b)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%d ", z);
		a++;//Belirlediğimiz basamağa gelene kadar değişken artacak
	}
}
