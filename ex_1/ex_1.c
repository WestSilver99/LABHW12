#include<stdio.h>
int main(void)
{
	int arr[3] = { 1,2,3 };
	int* p = arr;
	for (int i = 0; i < 3; i++)
		printf("%d", arr[i]);
	
	printf("\n");

	//���1
	printf("%d\n", *p);
	p++;
	printf("%d\n", *p);
	p++;
	printf("%d\n", *p);
	p++;

	printf("\n");

	p = arr;//p = &arr[0]���� �̵�
	//���1�� �ݺ������� ǥ���ϱ�
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *p);
		p++;
	}
	printf("\n");

	//���3: �����͸� �̵���Ű�� �����鼭 ����ϱ�
	
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(p + 1)); // *(p+1) <- ��

	}
	printf("\n");

	//���4: �����͸� �迭ó�� ����ϱ�
	for (int i = 0; i < 3; i++) {
		printf("%d\n", p[i]);
	}

	return 0;
}