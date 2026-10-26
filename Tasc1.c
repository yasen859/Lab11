#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, ".UTF8");
    float A[10];
    float temp;
    float sum = 0.0;
    for (int i = 0; i < 10; i++)

    {

        printf("a[%d] = ", i + 1);

        scanf_s("%f", &temp);

        A[i] = temp;


    }
    //удвоить значение каждого элемента массива
    for (int i = 0; i < 10; i++) {
        A[i] *= 2;
    }
    printf("\n| Индекс | Исходное значение | Преобразованное значение |\n");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        sum += A[i];
        printf("|%6d |%15.2f      |%18.2f      |\n", i + 1, A[i]/2, A[i]);
    }
    float average = sum / 10;
    printf("Среднее арифметическое элементов массива:%.2f\n", average);
}
