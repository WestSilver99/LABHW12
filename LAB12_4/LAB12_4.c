/*
LAB12_4 201820247 ������к� ����
*/
#include<stdio.h>
void get_rect_info(int width, int height, int *area_rect, int*cir_rect ) {
	*area_rect = width * height;
	*cir_rect = (width + height) * 2;

}
int main(void)
{
	int w, h;
	int area;
	int circumference;
	printf("���α���? ");
	scanf_s("%d", &w);
	printf("���α���? ");
	scanf_s("%d", &h);
	get_rect_info(w, h, &area, &circumference);
	printf("���� = %d, �ѷ� = %d\n", area, circumference
	);


	return 0;
}
