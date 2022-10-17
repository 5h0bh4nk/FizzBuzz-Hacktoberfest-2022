#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0, b=1, c, N, temp, i;
    printf("Enter the value of N (limit): ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        if(i==1)
            c = 0;
        else if(i==2 || i==3)
            c = 1;
        else
        {
            temp = a;
            a = b;
            b = c;
            c = a+b;
        }
        if(i==N)
            printf("%d", c);
        else
            printf("%d, ", c);
    }
    getch();
    return 0;
}
