//���ǥ������������� �ð� �Լ��� �� ���⶧���� �� ȿ�����̶�� �Ҽ��ֵ�.  

#include<stdio.h>

double power(double x, int n)
{
    if (n == 0) {
        return 1;
    } else {
        return x * power(x, n - 1);
    }
}

int main(void)
{
    double x;
    int n;

    printf("x�� n���� ���մϴ�.\n");
    printf("x�� n�� �Է��ϼ���: ");
    scanf("%lf %d", &x, &n);

    double result = power(x, n);

    printf("%.2lf�� %d���� %.2lf�Դϴ�.\n", x, n, result);

    return 0;
}

