#include <stdio.h>

int main(){
  double arr[3];
  
  int n = 0; 
  double value; 
  double sum = 0.0; 

  while(n < 3 && scanf("%lf", &value) == 1){
    arr[n] = value; 
    n++; 
  }

  for(int i = 0; i < n; i++){
    if(arr[i] > 0){
      sum += arr[i];
    }
  }

  printf("%.2f", sum);

  return 0; 
}
