/*
HW12_2 영어영문학부 201820247 서은
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
	printf("배열: ");
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

	printf("최대값: %d\n", *max);
	printf("최소값: %d\n", *min);
}