/*
LAB12_3 ������к� 201820247 ����
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void printData(int *pi, int n);
int totalData(int *pi, int n);
void reverData(int* pi, int n, int* reverse); //���� �迭 �����
int main(void)
{
	int data[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int reverse_arr[SIZE];
	printf("�迭 ���� ���:\n");
	printData(data,SIZE);
	printf("�迭������ �� = %d \n", totalData(data,SIZE));
	reverData(data, SIZE, reverse_arr);
	printData(reverse_arr, SIZE);
}
// printData �Լ��� data[0]..data[9]�� ���� ����Ѵ�.
void printData(int* pi, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", *pi);
		pi++;
	}
	printf("\n");
}
// totalData �Լ��� data[0]���� data[9]������ ���� ��� ���� �� ����� ��ȯ�Ѵ�.
int totalData(int* pi, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++) {
		sum += *pi;
		pi++;

	}
	return sum;
}

void reverData(int* pi, int n, int* reverse)
{
	int i;
	/*
	for (i = n-1; i > 0; i++)
	{
		*reverse = pi[i];
		reverse++;
	}
	*/
	for (i = n - 1; i > 0; i++)
	{
		reverse[ (n-1)-i ] = pi[i]; //reverse[�迭 ������ �ε��� - i] = pi[i]
	}


}