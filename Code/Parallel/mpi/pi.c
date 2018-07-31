#include <stdio.h>
static int long numSteps = 100000;
#include <time.h>
               
#define PI25DT 3.141592653589793238462643

#define INTERVALS 100000

int main() {
double x, dx, f, sum;
double pi = 0; 
double time=0;

time_t time1 = clock();

sum=0.0;
dx = 1.0/ (double) numSteps;


for (int i=1; i<=numSteps; i++) {
x = dx * ((double) (i-0.5));
f = 4.0/(1.0 + x*x);
sum = sum +f;
}

pi =dx*sum;
time = (clock()-time1)/(double) CLOCKS_PER_SEC*1000;
//time = (clock()-time1);

printf("PI = %f, duration: %f ms\n",pi, time);
return 0;
}
