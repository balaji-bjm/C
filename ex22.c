#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,sq_x,sq_y;
    double distance,midpoint_1,midpoint_2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    sq_x=x2-x1;
    sq_y=y2-y1;
    sq_x*=sq_x;
    sq_y*=sq_y;
    midpoint_1=(x1+x2)/2;
    midpoint_2=(y1+y2)/2;
    distance=sqrt(sq_x+sq_y);
    printf("%.2lf %.2lf\n",midpoint_1,midpoint_2);
    printf("%.2lf",distance);
    return 0;
}