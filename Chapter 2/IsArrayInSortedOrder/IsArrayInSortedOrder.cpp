#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int *A;

int IsArrayInSortedOrder(int A[],int n){
  if(n == 1)
    return 1;
  return (A[n-1]<A[n-2])?0:IsArrayInSortedOrder(A,n-1);
}

int main(){
  
  int n;
  
  cout<<"Enter the length of Array: ";
  cin>>n;
  
  A = new int[n];
  for(int i=0; i<n; i++){
    cout<<"Enter element number "<<i+1<<" of Array: ";
    cin>>A[i];
  }
  
  int answer = IsArrayInSortedOrder(A,n);
  
  cout<<answer;
  
  delete [] A;
  A = NULL;
  
  return 0;
}