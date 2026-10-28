#include <stdio.h>
#include <locale.h>

int potschot_el(int n) {
	int value;
	int last_zero = -1;
	int first_zero = -1;

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &value);
		if (value == 0) {
			if (first_zero == -1) {
				first_zero = i;
			}
			last_zero = i;
		}
	}
	return last_zero - first_zero - 1;
}

int main() {
	setlocale(LC_ALL, ".UTF8");
	int n;
	printf("Ведите количество элементов массива n:");
	scanf_s("%d", &n);

	printf("Введите %d целых чисел (положительных, отрицательных, нулей):\n", n);
	int count = potschot_el(n);
	printf("Колличество элементов между нулями: %d\n", count);
	 return 0;
}
