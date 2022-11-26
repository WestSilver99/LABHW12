/*
LAB12_4 201820247 영어영문학부 서은
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
	printf("가로길이? ");
	scanf_s("%d", &w);
	printf("세로길이? ");
	scanf_s("%d", &h);
	get_rect_info(w, h, &area, &circumference);
	printf("넓이 = %d, 둘레 = %d\n", area, circumference
	);


	return 0;
}
