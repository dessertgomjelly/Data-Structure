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
		
	printf("종업원 이름을 입력하세요 :  ");
	scanf("%s", &users[i].Name);

	printf("주민등록번호를 입력하세요 :  ");
	scanf("%s", &users[i].Number);

	printf("급여정보를 입력하세요 :  ");
	scanf("%d", &users[i].Salary);

	
}
	for(i = 0; i < 3; i++){
		printf("***직원정보***\n");
		printf(" 이름 : %s\n 주민등록번호 : %s\n 급여정보 : %d\n", users[i].Name, users[i].Number, users[i].Salary);
	}
	return 0;
}

