#include <stdio.h>
#include <conio.h>
#include <math.h>

int  prime( int n ) {
     int m = sqrt(n); 
      int i;  
     if (n<2) return 0; 
     for ( i=2; i<=m; i++) 
         if (n%i==0) return 0 ; 
     return 1; 
}
int main()
{
    int n;
    do
        {printf("n=");
        scanf("%d",&n);
        } while (n<0);
        int count = 0; 
        int i = 2; 
        while (count < n) {
        if (prime(i)==1)
            count++;
        i++;}
        printf("%d",i-1);
        getch();
        return 0;
}