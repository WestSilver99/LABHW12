/*
HW12_2 ������к� 201820247 ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void print_array(int* p, int size);
void get_min_max(const int* arr, int size, int* min, int* max);

int main(void)
{
	int arr[SIZE] = { 55, 12, 45, 98, 23, 35, 28, 67, 52, 40 };

	print_array(arr, SIZE);

	int* min = &arr[0];
	int* max = &arr[0];

	get_min_max(arr, SIZE, min, max);

	return 0;
}

void print_array(int* p, int size)
{
	printf("�迭: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", p[i]);
	printf("\n");
}

void get_min_max(const int* arr, int size, int* min, int* max)
{
	for (int i = 0; i < SIZE; i++)
		if (max <= arr[i])
			max = arr[i];

	for (int i = 0; i < SIZE; i++)
		if (*min >= *(arr + i))
			min = (arr + i);

	printf("�ִ밪: %d\n", *max);
	printf("�ּҰ�: %d\n", *min);
}