/*
HW12_6 ������к� 201820247 ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void print_array(const int* arr, int size);
int find_array(const int* arr, int size, int key, int* found);

int main(void) {
	int arr[SIZE] = { 11,22,33,88,22,22,33,44,55,77 };
	int found[SIZE];
	int key;


	print_array(arr, SIZE);

	printf("ã�� ��? ");
	scanf("%d", &key);

	int count = find_array(arr, SIZE, key, found);

	printf("ã�� �׸��� ��� %d���Դϴ�.\n", count);
	
	printf("ã�� �׸��� �ε���: ");
	print_array(found, count);

	return 0;
}

void print_array(const int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int find_array(const int* arr, int size, int key, int* found) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {

			found[count] = i;
			count++;
		}
	}
	return count;
}