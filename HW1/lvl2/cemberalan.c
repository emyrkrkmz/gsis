#include <stdio.h>

float alanbul(int r)// Alan bulacak fonksiyon
{
	float pi = 3.14;
	float x;

	x = r * r * pi;
	return (x);//Bulunan alanı döner
}

int main()
{
	int r;
	float alan;

	printf("Yarıcap giriniz: ");
	scanf("%d", &r);
	alan = alanbul(r);//alan değişkenine bulunan değer atanır
	printf("Alan: %f", alan);
}
