#include<stdio.h>
#include<conio.h>

int sum1(int n,int *max,int *min)
{
    
    int i,k,s=0;
    printf("k1=");
    scanf("%d",&k);
    *max=k;
    *min=k;
    s=k;
    for(i=2;i<=n;i++)
    {
        printf("k%d=",i);
        scanf("%d",&k);
        s+=k;
        if(*max<k) *max=k;
        if(*min>k) *min=k;
    }
    return s;
}
void function1()
{
    int n,x,y;
    printf("n=");
    scanf("%d",&n);
    printf("sum=%d\n",sum1(n,&x,&y));
    printf("max=%d,min=%d",x,y);
}
int main()
{
    function1();
    getch();
    return 0;
}