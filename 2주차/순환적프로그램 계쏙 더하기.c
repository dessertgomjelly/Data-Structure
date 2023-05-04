#include <stdio.h>
//다음을 계산하는 순환적인 프로그램을 작성하라.
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
	printf("n값을 입력하숑:");
	scanf("%d",&n);
	
	double result = program(n);
	
	printf("%lf",result);
}
