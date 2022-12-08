#include <stdio.h>
#include <locale.h>
#include <math.h> 
#define N 10
#define K 100
float main() {
	int i;
	float z = 0;
	float xx = 0;
	float x = 2;
	double gg = 0;
	int k1 = 0;
	int k = 0;
	int k2 = 0;
	float M[K];
	float F;
	setlocale(0, "rus");
	printf("Задание функция y=1.8x^2-sin10x и интервал [0.2; 2.2]\n");
	scanf("%d", &F);
	for (int j = 0; j < K; j++) {
		M[j] = 1.8 * (float)pow(x, 2) - (float)sin(10 * x);
		if (M[(int)x] >= 0) {
			z += M[(int)x];
			k1 += 1;
		}
		else {
			xx += M[(int)x];
			k2 += 1;
		}
	} x += F;
	gg = z / 100;
	printf("кол-во положиительных чисел =%d чисел, кол-во отрицательных чисел =%d, имя массива: M, ср.знач=%lf\n", k1, k2, gg);
	return 0;
}
				
			

			

	
	


