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

	printf("������ �̸��� �Է��ϼ���: ");
	scanf("%s", &users[0].Name);

	printf("�ֹε�Ϲ�ȣ�� �Է��ϼ���: ");
	scanf("%s", &users[1].Number);

	printf("�޿������� �Է��ϼ���: ");
	scanf("%d", &users[2].Salary);

	printf(" �������� \n �̸� : %s\n �ֹε�Ϲ�ȣ : %s\n �޿����� : %d", users[0].Name, users[1].Number, users[2].Salary);
	return 0;
}
