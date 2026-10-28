#include <stdio.h>
#include <math.h>

double calc(double a, double b);

int main(){
  
  double a, b; 
  
  while(scanf("%lf %lf", &a, &b) == 2){
    double value = calc(a, b);
    printf("%.4f\n", value);
  }
  
  return 0; 
}

double calc(double a, double b){
  return (pow(a, 3) + pow(b, 3)) / (a + b);
}
