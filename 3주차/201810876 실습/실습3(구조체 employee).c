#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct employee {
	char Name[20];
	char Number[20];
	int Salary;
};

int main(void) {

	struct employee users = { "문성준","991221-1000000",2000000 };

	printf(" 직원정보 \n 이름 : %s\n 주민등록번호 : %s\n 급여정보 : %d", users.Name, users.Number, users.Salary);

	return 0;
}