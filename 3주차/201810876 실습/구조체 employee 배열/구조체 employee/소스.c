#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct employee {
	char Name[20];
	char Number[20];
	int Salary;
};

int main(void) {

	struct employee users[3];
	int i;

	printf("종업원 이름을 입력하세요: ");
	scanf("%s", &users[0].Name);

	printf("주민등록번호를 입력하세요: ");
	scanf("%s", &users[1].Number);

	printf("급여정보를 입력하세요: ");
	scanf("%d", &users[2].Salary);

	printf(" 직원정보 \n 이름 : %s\n 주민등록번호 : %s\n 급여정보 : %d", users[0].Name, users[1].Number, users[2].Salary);
	return 0;
}
