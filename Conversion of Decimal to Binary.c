//Conversion of Decimal to Binary
#include <stdio.h>

int main()
{
    int i=0, j;
    long A, binary[1000];
    printf("Enter the Decimal Number:\n");
    scanf("%ld", &A);
    printf("The Binary Value for %ld is ", A);
    if (A==0)
    {
        printf("0");
    }
    while (A>0)
    {
        binary[i]=A%2;
        A/=2;
        i++;
    }
    for (j=i-1;j>-1;j--)
    {
        printf("%ld", binary[j]);
    }
    return 0;
}
