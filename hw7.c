#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5

void func1(int array1[]);

int main() {
    int array1[ARRAY_SIZE] = { 0 };

    printf("Enter 5 real numbers: ");

    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf_s("%d", array1 + i);

    func1(array1);

}

void func1(int array1[]) {
    int sum = 0;
    double avg = 0, var = 0, std_dev = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
        sum += array1[i];

    avg = (double)sum / ARRAY_SIZE;

    for (int i = 0; i < ARRAY_SIZE; i++)
        var += pow(array1[i] - avg, 2);

    var /= ARRAY_SIZE;

    std_dev = sqrt(var);

    printf("Standard Deviation = %.3lf\n", std_dev);
}
