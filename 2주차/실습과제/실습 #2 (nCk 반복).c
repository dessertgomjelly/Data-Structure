#include <stdio.h>

int nCk(int n, int k)
{
	int a = 1;
	int b = 1;
	int i;
	
	 
	if(n == 1 || n == k)
	{
		return 1;
	}
	else
	{
	for (i = n; i > (n-k); i--)		
	{
		a = a * i;
	
	}
	for (k = k; k > 0; k--)
	{
		b = b * k;
	
	}
	
	return a/b;
	
	}
}
int main (void)
{
	int n, k;
	printf("n���� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("k���� �Է��ϼ��� : "); 
	scanf("%d", &k);
	printf("��� ���� : %d", nCk(n, k));
	return 0;
}
