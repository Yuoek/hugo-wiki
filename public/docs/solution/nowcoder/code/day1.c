#include <stdio.h>
int main(){
    int n;
    while (scanf("%d", &n) != EOF){

  for(int i = 1; i <= n + 1; i++){
    for(int j = 1; j <= 2*(n + 1 - i)  ; j++){
      printf(" ");
    }
    for(int k = 1; k <= i; k++){
        printf("*");
    }
    
    printf("\n");
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 2*i ; j++){
      printf(" ");
    }
    for(int k = n - i + 1; k > 0; k--){
        printf("*");
    }
    
    printf("\n");
  }

    }
}
