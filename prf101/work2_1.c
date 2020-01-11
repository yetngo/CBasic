//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include<conio.h>
int main()
{
    double num1, num2;
    char  op;
    double result;
    printf("input num1 op num2");
    scanf("%lf %c %lf", &num1, &op, &num2);
    switch (op)
    {    
        case '+' : result = num1 + num2;
        break;
        case '-' : result = num1 - num2;
        break;
        case '*' : result = num1 * num2;
        break;
        case '/' : if ( num2==0)
        printf("Divide by 0");
        else
        result = num1 / num2;
        break;
        default: printf("Op is not supported");
    }
    printf("%10.2lf%c%10.2lf=%10.2lf",num1,op,num2,result);
    getch();
    return 0;
}