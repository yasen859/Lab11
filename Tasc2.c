#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
double F(double x) {
	double y;
	y = x * x + sin(5 * x);
	return y;
}

int main(){
	setlocale(LC_ALL, ".UTF8");
	double A[N];
	double x_s = 0.1;
	double x_e = 2.1;
	double sum_pos = 0.0;
	double sum_neg = 0.0;
	int count_pos = 0;
	int count_neg = 0;
	double step = (x_e - x_s) / (N - 1);

	for (int i = 0; i < N; i++) {
		double x = x_s + i;
		A[i] = F(x);
	}
	for (int i = 0; i < N; i++) {
		if (A[N] > 0) {
			sum_pos += A[N];
			count_pos++;
		}
		else if (A[N] < 0)
		{
			sum_neg += A[N];
			count_neg++;
		}
	}
	printf("Имя массива: A[N]: накопленное положение (пол.): %.4f, (отр.): %.4f; Число элементов (пол.): %d, (отр.): %d\n", sum_pos, sum_neg, count_pos, count_neg);
	return 0;
}