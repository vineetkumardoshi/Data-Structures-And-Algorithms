#include<iostream>
#include<cstdio>
using namespace std;

char *A;

void Binary(int n){
  
  if(n<1){
    printf("%s\n",A);
  }
  else{
    A[n-1] = '0';
    Binary(n-1);
    A[n-1] = '1';
    Binary(n-1);
  }
}

int main(){
  int n;
  
  cout<<"Enter length of array: ";
  cin>>n;
  
  A = new char[n];
  
  Binary(n);
  
  delete [] A;
  A = NULL;
  
  return 0;
}