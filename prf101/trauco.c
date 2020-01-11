#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int random(int a, int b)
{
    return a+rand()%(b-a);
}
int main()
{
    int a,b,num,count=1,sum,max,min;
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    srand(time (NULL));
    num=random(a,b);
    printf("%d ",num);
    sum=num;
    max=num;min=num;
    while(count<5)
    {
        num=random(a,b);
        printf("%d ",num);
        sum+=num;
        if(num>max) max=num;
        if(num<min) min=num;
        count++;
    }
    printf("sum=%d",sum);
getch();
return 0;
}
