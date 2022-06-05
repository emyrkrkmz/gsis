#include <stdio.h>

int main()
{
	float	top = 0;
	int	a, b, c, d, e;
	int i;

	printf("Sayıları aralarında bosluk bırakarak giriniz: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int list[5] = {a, b, c, d, e}; //girilen tüm elemanları bir dizi içerisine alıyoruz.
	
	for(i = 0; i < 5; i++)
	{
		top += list[i];
	}
	top /= 5;
	printf("\nOrtalama: %f", top);
}
