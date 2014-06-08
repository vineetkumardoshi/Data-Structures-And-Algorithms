#include <cstdio>
#include <stdlib.h>

using namespace std;

int *A;
int length;

void k_string(int n, int k){
  if( n < 1 ){
    for(int l = 0; l<length; l++){
      printf("%d",A[l]);
    }
    printf("\n");
  }
  else{
    for(int j = 0; j < k; j++){
      A[n-1] = j;
      k_string(n-1,k);
    }
  }
}

int main(){
  
  int n,k;
  
  printf("Enter length of string: ");
  scanf("%d",&n);
  
  printf("Enter k value: ");
  scanf("%d",&k);
  
  A = new int[n];
  length = n;
  
  k_string(n,k);
  
  delete [] A;
  
  A = NULL;
  
  return 0;
}