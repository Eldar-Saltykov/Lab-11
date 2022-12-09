#include <stdio.h>
#include <locale.h>
#include <math.h> 

main() {
	int i, n, temp;
	float s = 0;
	float m;
	
	setlocale(0, "");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i + 1);

		scanf("%d", &temp);
		
		a[i] = temp;
	}
	for (int i = 0; i < n; i++) {

		if (i % 2 != 0 && a[i] > 0) {


			s = s + a[i];
			m = s / n;
		}

		
	}
	printf("Среднее значение положительных элементов массива, по нечётным я чейком = %.2f", m);
