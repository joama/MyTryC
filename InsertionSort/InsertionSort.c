#include <stdio.h>

void insertion_sort(int A[],int n){
    int i,j,key;
  for ( j=2; i < n; i++){
        key = A[j];
        i = j-1;
      while (i>0 && A[i]>key)
      {      
             A[i+1] = A[i];
             i = i-1;
             A[i+1] = key;
       }
   }
}

int main(){
    int n=6;
    int A[6]={5,2,4,6,1,3};
    insertion_sort(A,n);
    printf("%d",A);
    printf("%d",n);
    return 0;
}