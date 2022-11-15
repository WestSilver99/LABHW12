#include<stdio.h>
int main(void)
{
	int arr[3] = { 1,2,3 };
	int* p = arr;
	for (int i = 0; i < 3; i++)
		printf("%d", arr[i]);
	
	printf("\n");

	//방법1
	printf("%d\n", *p);
	p++;
	printf("%d\n", *p);
	p++;
	printf("%d\n", *p);
	p++;

	printf("\n");

	p = arr;//p = &arr[0]으로 이동
	//방법1을 반복문으로 표현하기
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *p);
		p++;
	}
	printf("\n");

	//방법3: 포인터를 이동시키지 않으면서 출력하기
	
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(p + 1)); // *(p+1) <- 값

	}
	printf("\n");

	//방법4: 포인터를 배열처럼 사용하기
	for (int i = 0; i < 3; i++) {
		printf("%d\n", p[i]);
	}

	return 0;
}