#include <stdio.h>
#define mile 1.609

int main() {
	float input = 0;
	printf("please enter kilometers:");
	scanf_s("%f", &input);

	printf("%.1f km is equal to %.1f miles.", input, input / mile);

	return 0;
}
