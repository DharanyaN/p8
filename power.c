#include<stdio.h>
#include<math.h>
int main()
{
    int b,e,r;
    printf("\n Enter a base number: ");
    scanf("%d",&b);
    printf("\n Enter an exponent: ");
    scanf("%d",&e);
    r=pow(b,e);
    printf("%d",r);
}
