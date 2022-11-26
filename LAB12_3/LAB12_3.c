/*
LAB12_3 영어영문학부 201820247 서은
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void printData(int *pi, int n);
int totalData(int *pi, int n);
void reverData(int* pi, int n, int* reverse); //역순 배열 만들기
int main(void)
{
	int data[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int reverse_arr[SIZE];
	printf("배열 원소 출력:\n");
	printData(data,SIZE);
	printf("배열원소의 합 = %d \n", totalData(data,SIZE));
	reverData(data, SIZE, reverse_arr);
	printData(reverse_arr, SIZE);
}
// printData 함수는 data[0]..data[9]의 값을 출력한다.
void printData(int* pi, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", *pi);
		pi++;
	}
	printf("\n");
}
// totalData 함수는 data[0]에서 data[9]까지의 값을 모두 더해 그 결과를 반환한다.
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
		reverse[ (n-1)-i ] = pi[i]; //reverse[배열 마지막 인덱스 - i] = pi[i]
	}


}