#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct employee {
	char Name[20];
	char Number[20];
	int Salary;
};

int main(void) {
	
	int i;
	struct employee users[3];
	

	for(i = 0; i < 3; i++){
		
	printf("������ �̸��� �Է��ϼ��� :  ");
	scanf("%s", &users[i].Name);

	printf("�ֹε�Ϲ�ȣ�� �Է��ϼ��� :  ");
	scanf("%s", &users[i].Number);

	printf("�޿������� �Է��ϼ��� :  ");
	scanf("%d", &users[i].Salary);

	
}
	for(i = 0; i < 3; i++){
		printf("***��������***\n");
		printf(" �̸� : %s\n �ֹε�Ϲ�ȣ : %s\n �޿����� : %d\n", users[i].Name, users[i].Number, users[i].Salary);
	}
	return 0;
}

