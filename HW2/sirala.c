#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int main(){

	int a[9];
	int i = 0;

	while(i <= 9)
	{
		printf("Sayi giriniz: ");
		scanf("%d", &a[i]);
		i++;
	}

	int x, j, min_say;
	
	for (x = 0; x < 9; x++) {
		min_say = x;
		for (j = x + 1; j < 10; j++)
			if (a[j] < a[min_say])
				min_say = j;
		swap(&a[min_say], &a[x]);
	}

	i = 0;
	while(a[i++] != '\0')
		printf("%d ",a[i]);
}
