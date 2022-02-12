/*Simpson's method*/

#include <stdio.h>
#define _USE_MATH_DEFINES

#include <math.h>
float f(float x){
    return(4/(1+x*x));
}
int main(void){
    int i,n;
    float a=0.0,b=1.0,h,s1=0.0,s2=0.0,S,x;
    printf("input n:");
    scanf("%d",&n);

    n=n/2;
    h=(b-a)/(2.0*n);

    S=f(a)+f(b);
    for(i=1;i<2*n;i++) {
        x=a+h*i;
        if(i%2==1){
        s1+=f(x);
        }
        else {
        s2+=f(x);
        }
    }
    S=(S+4.0*s1+2.0*s2)*h/3.0;
    printf("divide:%2d, S=%f, error=%f\n",n,S,S-M_PI);
}

/*
input n:2
divide: 1, S=3.133333, error=-0.008259

input n:5
divide: 2, S=3.141569, error=-0.000024

input n:10
divide: 5, S=3.141593, error=0.000000

input n:40
divide:20, S=3.141593, error=0.000000
*/