#include <stdio.h>
//������ ����ϴ� ��ȯ���� ���α׷��� �ۼ��϶�.
//1 + 1/2 + 1/3+ .....+ 1/n 


#include <stdio.h>

double program(float n){
	
	
	if (n == 1){
		return 1;
	}
	
	else {
		return 1/n + program(n-1);
	}
}

int main(void){
	
	int n;
	printf("n���� �Է��ϼ�:");
	scanf("%d",&n);
	
	double result = program(n);
	
	printf("%lf",result);
}
