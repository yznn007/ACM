#include <stdio.h>
#include <math.h>
const double g=9.8;
const double pi=3.14159265358979323846;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double x1, y1, x2, y2;
        scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
        double dx=x2-x1;
        double dy=y2-y1;
        double R=sqrt(dx*dx+dy*dy);
        double v0=sqrt(g*(R+dy));
        double rad=atan((R+dy)/dx);
        double deg=rad*180.0/pi;
        printf("%.1lfm/s %.1lf°\n",v0,deg);
    }
    return 0;
}