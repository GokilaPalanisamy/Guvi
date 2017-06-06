#include <stdio.h>
int main()
{
    int n,n1, r, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    n1 = n;

    while (n1 != 0)
    {
        r = n1%10;
        result += r*r*r;
        n1 /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
