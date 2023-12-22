/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Conversion of Decimal Integers to Binary, Octal & Hexadecimal
#include <stdio.h>

int main()
{
    unsigned int n, temp;
    int i=0, j, binary[1000];
    printf("Enter the value of 'n':\n");
    scanf("%u", &n);
    temp=n;
    while(temp>0)
    {
        binary[i]=temp%2;
        temp/=2;
        i++;
    }
    printf("The Binary Value of %u is ", n);
    for (j=i-1;j>=0;j--)
    {
        printf("%d", binary[j]);
    }
    printf("\nThe Octal Value of %u is %o", n, n);
    printf("\nThe Hexadecimal Value of %u is %x", n, n);
    return 0;
}