include <stdio.h> 
#include <locale.h>
#include <math.h> 
#define N 10
#define K 100
int main() {
	int A[K];
	int temp;
	int i, x, k1 = 0, k = 0, k2 = 0;
	float z = 0, xx = 0, x = 2, F;
	double gg = 0;
	setlocale(0, "rus");
	puts("Задна функция у = 1.8x^2 - sin10x и интервал[0.2;2.2]\n");
		    scanf("%d", &temp);
			for (int i = ; i < K; i++) {
				A[i] = 1.8 * (float)pow(x, 2) - (float)sin(10 * x);
				if (A[(int)x] >= 0) {
					z += A[(int)x];
					k1 += 1;
				}
				else{
				xx += A[(int)x];
				k2 += 1;
				}
				}x += F;
				gg = z/100;
				printf("кол-во положиительных чисел =%d чисел, кол-во отрицательных чисел =%d, имя массива: A, ср.знач=%lf\n", k1, k2, gg);
	return 0;
}
				
			

			

	
	

}
