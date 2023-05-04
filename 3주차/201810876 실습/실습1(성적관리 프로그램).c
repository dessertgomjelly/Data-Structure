#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
	{
	int arr1[5][5] = { 0, };

		int i;
		int j;

		printf("성적 입력 프로그램입니다.\n");
		printf("철희(1), 철수(2), 영희(3), 영수(4) \n");
		printf("국어(1), 영어(2), 수학(3), 국사(4) \n\n");

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
			{
				printf("%d번 학생의 %d번 과목의 성적 : ", i + 1, j + 1);
				scanf("%d", &arr1[i][j]);
			}
		}

		for (i = 0; i < 4; i++)
		{
			arr1[i][4] = arr1[i][0] + arr1[i][1] + arr1[i][2] + arr1[i][3];
		}
		for (j = 0; j < 4; j++)
		{
			arr1[4][j] = arr1[0][j] + arr1[1][j] + arr1[2][j] + arr1[3][j];
		}

		for (i = 0; i < 5; i++)
		{
			printf("\n");

			for (j = 0; j < 5; j++)
			{
				printf("%d ", arr1[i][j]);
			}
		}
		return 0;
	}
