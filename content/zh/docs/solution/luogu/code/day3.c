
#include <stdio.h> 

int main(){

  int n = 5;
  int arr[n];
  int arr2[n+1];
  int tub[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    arr2[i+1] = arr[i] - arr[i-1];


  }

  for(int i = 1; i < n+1; i++){
    if(arr2[i] < 0){
      arr2[i] = -arr2[i];
    }
    printf("%d ", arr2[i]);
  }
  

  printf("\n");
  for(int i = 0; i < n; i++){
    for(int j = 1; j < n+1;j++){
      if(arr2[j] == arr[i]){
        if(tub[j] == 0){
           printf("%d%d ", j-1, j);
           tub[j] = 1;
        }
        break;

      }
    }

  }

  return 0;

}
