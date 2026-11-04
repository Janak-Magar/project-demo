#include <stdio.h>
int main()
{
    int n, original, num, sum = 0;
    printf("Enter three number:");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        num = n % 10;
        sum = sum + (num * num * num);
        n = n / 10;
    }
    if (original == sum)
    {
        printf("Yes, it is Armstrong number.");
    }
    else
    {
        printf("It is not Armstrong number.");
    }
    return 0;
}