#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Addition(double a,double b)
{
    return a+b;
}
double Substract (double a, double b)
{
  return a-b;
}
double Multiplication(double a,double b)
{
    return a*b;
}
double Division (double a, double b)
{
    if(b==0)
    {
        printf("Error.");
    }
    return a/b;
}
double SquareRootA(double a )
{
    double sqA;
    sqA=sqrt(a);
    return sqA;
}
double SquareRootB(double b)
{
    double sqB;
    sqB=sqrt(b);
    return sqB;
}
double PowerOfNum(double a,double b)
{
    return pow(a,b);
}

int main()
{
    double a,b,result;
    printf("Enter symbol for an operation:\n");
    char symbol;
    scanf("%s",&symbol);
    if(symbol=='+')
    {
        scanf("%lf%lf",&a,&b);
        Addition(a,b);
        printf("%.2lf",Addition(a,b));
    }

    if(symbol=='-')
    {
        scanf("%lf%lf",&a,&b);
        Substract(a,b);
        printf("%.2lf",Substract(a,b));

    }
    if(symbol=='*')
    {
        scanf("%lf%lf",&a,&b);
        Multiplication(a,b);
        printf("%.2lf",Multiplication(a,b));
    }
    if(symbol=='/')
    {
        scanf("%lf%lf",&a,&b);
        Division(a,b);
        printf("%.2lf",Division(a,b));

    }
    if(symbol=='s')
    {
      scanf("%lf%lf",&a,&b);
      SquareRootA(a);
      SquareRootB(b);
    printf("%.2lf %.2lf",SquareRootA(a),SquareRootB(b));

    }
    if(symbol=='^')
    {
       scanf("%lf%lf",&a,&b);
       result=PowerOfNum(a,b);
       printf("%.2lf  ",result);

    }

    return 0;
}
