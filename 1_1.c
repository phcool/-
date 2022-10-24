#include <stdio.h>
int main()
{
    double pi=3.14;
    double r,R,a;
    double h;
    scanf("%lf",&r);
    scanf("%lf",&R);
    scanf("%lf",&a);
    scanf("%lf",&h);
    double c=2*pi*r;
    double s=pi*r*r;
    double S=4*pi*R*R;
    double v=4*pi*R*R*R/3;
    double V=pi*a*a*h;
    printf("%.5f\n",c);
    printf("%.5f\n",s);
    printf("%.5f\n",S);
    printf("%.5f\n",v);
    printf("%.5f\n",V);
}