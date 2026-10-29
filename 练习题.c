#include <math.h>
#include <stdio.h>
 double distance(double x1,double y1,double x2,double y2)
{
    double dx=x1-x2;
    double dy=y1-y2;
    return sqrt(dx*dx+dy*dy);
}
int main (void)
{
    double x1,y1,x2,y2,x3,y3;
scanf("%lf %lf\n %lf %lf\n%lf %lf",&x1 ,&y1, &x2, &y2,&x3,&y3);
double ab=distance(x1,y1,x2,y2);
double bc=distance(x2,y2,x3,y3);
double ac=distance(x1,y1,x3,y3);
printf("%.3f\n",ab+bc+ac);
return 0;
}