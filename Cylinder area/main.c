#include <stdio.h>
#include <stdlib.h>

   int main()
{
double r,h;
scanf("%lf",&r);
scanf("%lf",&h);
double b=2*3.1415926*r*r;
double a=2*3.1415926*r*h;
printf("%.4f\n",b+a);

return 0;
}
