//���丮�� ���α׷��� #1

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
	printf("n���丮���� ���ϱ����� n���� �Է��ϼ��� : ");
	scanf("%d",&n);
	
	printf("%d���丮����? %d ", n,factorial(n));

}


