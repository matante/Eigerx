#include <stdio.h>

int sum_digits(int num) {
    if (num == 0) {
        return 0;
    }
    if (num < 0) {
        num = -num;
    }
    return (num % 10) + sum_digits(num / 10);
}



int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%d", sum_digits(num));
    return 0;
}
