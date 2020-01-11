//Le Thi Thanh Nhan
//DE140100
//SE1402
#include<stdio.h>
#include<conio.h>
#define pa 9000000 
#define pd 3600000
int main()
{
    int n,tf,ti,income,income_tax;
    printf("number of dependents =");
    scanf("%d",&n);
    printf("your income of this year=");
    scanf("%d",&income);
    tf=12*(pa+n*pd);
    ti=income-tf;
    if (ti<=0) {
        income_tax=0;
        ti=0;}
    else if (ti<=5000000) income_tax=0.05*ti;
    else if (ti<=10000000) income_tax=0.05*5000000+0.1*(ti-5000000);
    else if (ti<=18000000) income_tax=(0.05+0.1)*5000000+0.15*(ti-10000000);
    else income_tax=0.05 * 5000000 + 0.1 * 5000000 + 0.15 * 8000000 + 0.2 * (ti - 18000000);
    printf("Tax-free income=%d\n",tf);
    printf("Taxable income=%d\n",ti);
    printf("Income tax=%d",income_tax);
    getch();
    return 0;
}