//빅오표기법으로했을때 시간 함수가 더 적기때문에 더 효율적이라고 할수있따.  

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

    printf("x의 n승을 구합니다.\n");
    printf("x와 n을 입력하세요: ");
    scanf("%lf %d", &x, &n);

    double result = power(x, n);

    printf("%.2lf의 %d승은 %.2lf입니다.\n", x, n, result);

    return 0;
}

