#include <stdio.h>

int main()
{
	int	a;
	int	b;

	printf("Bir sayi giriniz: ");
	scanf("%d", &a);
	b = a;
	while(b > 1)
	{
		b--;
		if((b > 1) && (a % b == 0))
		{
			printf("Asal degil");
			return (0);
		}
	}
	printf("Asal sayidir");
}
