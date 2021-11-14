#include <stdio.h>

void help(int array1[6]);
void swap(int array1[6], int array2[6], int array3[6]);

int main() {
    int arr1[6] = { 1,2,3,4,5,6 }, arr2[6] = { 7,8,9,10,11,12 }, temp[6] = { 0 };

    int* parr1 = arr1, * parr2 = arr2;


    printf("arr1: ");
    help(parr1);
    printf("arr2: ");
    help(parr2);

    swap(parr1, parr2, temp);

    printf("\nafter swap\n");

    printf("arr1: ");
    help(parr1);
    printf("arr2: ");
    help(parr2);

    return 0;
}
void help(int array1[6]) {
    for (int j = 0; j < 6; j++)
        printf("%d ", array1[j]);
    printf("\n");
}
void swap(int array1[6], int array2[6], int array3[6]) {
    for (int i = 0; i < 6; i++) {
        array3[i] = array1[i];
        array1[i] = array2[i];
        array2[i] = array3[i];
    }
}