#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int length=10;
    float timeperiod;const double g=9.8;
    while(length<=200)
    {
       timeperiod=2*pi*sqrt(length/g);
        printf("%f\n",timeperiod);
        length=length+20;
    }
    return 0;
}
    
     

