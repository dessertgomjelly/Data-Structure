//팩토리얼 프로그래밍 #1

#include <stdio.h>

int factorial(int n)
{
	if(n<=1){
		return 1;
	}
	else{
		return (n * factorial(n-1));
	}
 } 

int main (void)
{
	int n;
	printf("n팩토리얼을 구하기위해 n값을 입력하세요 : ");
	scanf("%d",&n);
	
	printf("%d팩토리얼은? %d ", n,factorial(n));

}


