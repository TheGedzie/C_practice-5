#include <stdio.h>
#include <math.h>

int main(){
  
  int count; 
  while(scanf("%d", &count) == 1){
    
    if(count <= 0){
      break; 
    }
    
    double sum = 0.0; 
    for(int i = 1; i <= count; i++){
      sum += 1 / pow(i, 3);
    }
    printf("%f\n", sum);
  }

  return 0; 
}
