/*
HW12_3 ������к� 201820247 ����
*/

#include <stdio.h>
#define SIZE 5
void print_array(int* p, int size);
void swap_array(int* x, int* y, int size);

int main(void)
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 6,7,8,9,10 };

	printf("a �迭: ");
	print_array(a, SIZE);
	printf("b �迭: ");
	print_array(b, SIZE);

	printf("<< swap_array ȣ�� ��>>\n");

	swap_array(a, b, SIZE);

	printf("a �迭: ");
	print_array(a, SIZE);
	printf("b �迭: ");
	print_array(b, SIZE);
}

void print_array(int* p, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
}

void swap_array(int* x, int* y, int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		temp = x[i];
		x[i] = y[i];
		y[i] = temp;
	}
}