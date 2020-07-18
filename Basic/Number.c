#include <stdio.h>

int main()
{
    int n, e;
    printf("Enter the start number");
    scanf("%d", &n);

    printf("Enter end number");
    scanf("%d", &e);
    while (n <= e)
    {
        printf("%d\n", n);
        n++;
    }
}