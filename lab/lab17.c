#include <stdio.h>
#include <conio.h>
#include <math.h>
double FuelEconomy()
{
    int minutes;
    double avespeed, gas,result;
    printf("How many minutes did you drive?\n");
    scanf("%d", &minutes);
    printf("What was the average speed of the car during that time, in km/h?\n");
    scanf("%lf", &avespeed);
    printf("How many gallons of gas did your car use?\n");
    scanf("%lf", &gas);
    result=(double)((minutes*60*(avespeed/3600.00))/gas);
    printf("Your car averaged %.2lf miles per gallon.",result );
}
double DistanceTraveled()
{
    double radius,result;
    int numrevo;
    printf("What is the radius of your tires, in inches?\n");
    scanf("%lf", &radius);
    radius=radius*1.578*pow(10,-5);
    printf("How many revolutions did your car's tires make?\n");
    scanf("%d", &numrevo);
    result=(double)(radius*2*3.14*numrevo);
    printf("Your car traveled %f miles.",result );
}
double RFEC()
{
    int numrevo;
    double radius,avespeed, gas,result;
    printf("What is the radius of your tires, in inches?\n");
    scanf("%lf", &radius);
    radius=radius*1.578*pow(10,-5);
    printf("How many revolutions did your car's tires make?\n");
    scanf("%d", &numrevo);
    printf("How many gallons of gas did your car use?\n");
    scanf("%lf", &gas);
    result=(double)((radius*2*3.14*numrevo)/gas);
    printf("Your car averaged %lf miles per gallon.", result);
}
int main()
{
    int op;
    do
    {
        printf("\n1-Calculating Fuel Economy");
        printf("\n2-Calculating Distance Traveled");
        printf("\n3-Revised FuelEconomy Calculation");
        printf("\n\nChoice feature:");
        scanf("%d",&op);
        switch(op)
        {
            case 1: FuelEconomy();break;
            case 2: DistanceTraveled();break;
            case 3: RFEC();break;
        }
        printf("\n\n\n");
    } while (0<op&&op<4);
    getch();
    return 0;
}