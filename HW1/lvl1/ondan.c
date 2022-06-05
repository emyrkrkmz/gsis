#include <stdio.h>

int main()
{
	int	a;

	printf("Bir sayi giriniz: ");
	scanf("%d", &a);//Girdi alınan yer
	if (a > 10)
		printf("Buyuk");
	else if (a == 10)
		printf("Esit");
	else
		printf("Kucuk");
}
