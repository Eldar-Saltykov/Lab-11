#include <stdio.h>
#include <locale.h>
#include <math.h> 
#include <stdlib.h>
#define N 100
#define XMAX 112.4
#define NMAX 10
#define XMIN -100
main() {
	int i, temp, a[N];
	float s = 0;
	float m;
	int stime;
	long ltime;
	ltime = time(NULL);
	stime = (unsigned)ltime / 2;
	srand(stime);

	setlocale(0, "");


	for (i = 0; i < N; i++) {

		a[i] = XMIN + 1.f * (XMAX - XMIN) * rand() / RAND_MAX;
		printf("a[%d] = %d\n", i, a[i]);
	}


	for (i = 0; i < N; i++) {

		if (i % 2 != 0 && a[i] > 0) {


			s = s + a[i];
			m = s / N;
		}


	}
	printf("Среднее значение положительных элементов массива, по нечётным ячейкам = %.2f", m);
}
