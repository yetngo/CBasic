//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <math.h>

int  prime( int n ) {
     int m = sqrt(n); /* m: square root of n */
      int i;  /* variable having value from 2 to m  */ 
     if (n<2) return 0; /* Condition 1 is not satisfied */
     for ( i=2; i<=m; i++) /* checking the second condition */
         if (n%i==0) return 0 ; /* n is divided by i  n is not a prime */
     return 1; /* n is a prime */ 
}

double fibo ( int n) {
    int t1=1, t2=1, f=1, i ;
    printf("%d,%d",t1,t2);
   for ( i= 3; i<=n; i++) {
      f= t1 + t2;
      t1= t2;
      t2=f;
      printf(",%d",f);
   }
   return f;
} 

int main()
{
    int choice,n;
    do {
        printf("\n1-Print the first n Fibonacci numbers\n");
        printf("2-Print the first n prime\n");
        printf("3-Select an operation:");
        scanf("%d",&choice);
        switch(choice)
        {case 1: do
        {
            printf("n=");
        scanf("%d",&n);
        } while (n<0);
        fibo (n);
        break;
        case 2: {do
        {
            printf("n=");
        scanf("%d",&n);
        } while (n<0);
        int dem = 0; 
        int i = 2; 
        while (dem < n) {
        if (prime(i)==1) {
            printf("%d ", i);
            dem++;
        }
        i++;
    }
        break;
        default:;
        }}
    }
    while ((choice>0)&&(choice<3));
    getch();
    return 0;
}