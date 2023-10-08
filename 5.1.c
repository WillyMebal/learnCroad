#include <stdio.h>

int main() {
    double num1, num2, num3, num4, num5;

    printf("请输入5个实数：\n");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);

    if (num1 <= num2 && num2 <= num3 && num3 <= num4 && num4 <= num5) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}