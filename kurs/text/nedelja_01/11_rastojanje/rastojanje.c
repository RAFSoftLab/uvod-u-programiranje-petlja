#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x1,y1;
    double x2,y2;
    double d;

    scanf("%lf%lf", &x1,&y1);
    scanf("%lf%lf", &x2,&y2);

    d = sqrt(pow(x1-x2,2) + pow(y1-y2,2));

    printf("%.2lf", d);

    return 0;
}
