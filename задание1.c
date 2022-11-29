#include <stdio.h> 
#include <locale.h>
#include <math.h> 
#define N 10
#define K 100
int main() {
	int A[N];
	int temp;
	int i;
	setlocale(0, "rus");
	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = ", i + 1);

		scanf("%d", &temp);
		
		A[i] = temp; 
	}
	printf("\n-----------------------------------------------\n" "| индекс | исходное значение | новое значение | \n" "-----------------------------------------------\n");
	for (int i = 0; i < N; i++) {
		printf("| %6d | %17d | %14d |\n", i, A[i], 2*A[i]);
	}
	printf("-----------------------------------------------\n");
	printf("Среднее арифметическое элементов массивва \n");
	float sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + A[i];
	float middle = sum / N;
	printf("Среднее арифметическое A[%d] = %g\n", N, middle);
	printf("------------------\n""| новое значение |\n" "------------------\n");
	
	for (int i = 0; i < N; i++) {
		if (A[i] % 2 == 0)
			A[i] =  1 ;
		printf("| %10d |\n", A[i]);
	}
	

}
