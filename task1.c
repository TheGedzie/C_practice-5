#include <stdio.h>
#include <math.h> 
#define PI 3.14159265358979323846

int main(){
  int count = 1; 
  for (double i = 0.0; i <= PI; i += 0.5){
    printf("| %d | %.4f | %.4f |\n",
      count,
      i,
      cos(i));
    count++; 
  }
  return 0; 
}
