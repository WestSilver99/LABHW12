/*
HW12_1 ������к� 201820247 ����
*/

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include<stdio.h>

void add_array(int* p, int size, int n);
void print_array(int* p, int size);
int main(void)
{
	int data[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };
	int number;
	print_array(data, SIZE);
	
	printf("���� �����Է�: ");
	scanf("%d", &number);

	add_array(data, SIZE, number);

	return 0;
}

void print_array(int* p, int size) {
	printf("���� ������: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
}

void add_array(int* p, int size, int n) {
	printf("���: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i] + n);
	}
	printf("\n");
}

