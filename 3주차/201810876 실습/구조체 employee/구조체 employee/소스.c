#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct employee {
	char Name[20];
	char Number[20];
	int Salary;
};

int main(void) {

	struct employee users = { "������","991221-1000000",2000000 };

	printf(" �������� \n �̸� : %s\n �ֹε�Ϲ�ȣ : %s\n �޿����� : %d", users.Name, users.Number, users.Salary);

	return 0;
}