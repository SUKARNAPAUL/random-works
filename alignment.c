#include<stdio.h>
int main()
{
    int a=678,b=90, c=333333;
    printf("%d %d %d\n",a,b,c);
    printf("%d %d %d\n",b,c,a);

    //right alignment

    printf("%5d %7d %10d\n",a,b,c);
    printf("%5d %7d %10d\n",b,c,a);

    //left alignment
    printf("%-5d %-7d %-10d\n",a,b,c);
    printf("%-5d %-7d %-10d\n",c,a,b);

    return 0;
}
