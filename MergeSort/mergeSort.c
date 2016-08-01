#include<stdio.h>
#define MAX 50

void MERGE(int arr[],int low,int mid,int high);
void MERGE-SORT(int arr[],int low,int high);

int main(){
   
    int merge[MAX],i,n;

    printf("Enter the total number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements which to be sort: ");
    for(i=0;i<n;i++){
         scanf("%d",&merge[i]);
    }

    MERGE-SORT(merge,0,n-1);

    printf("After merge sorting elements are: ");
    for(i=0;i<n;i++){
         printf("%d ",merge[i]);
    }

   return 0;
}

MERGE(int A[], int p, int q, int r){
	int i,j,k;
	int n1 = q - p + 1;
	int n2 = r - q;
	// let L[1..n1+1] and R[1..n2+1] be new arrays
	int L[n1], R[n2];
	for (i = 1 ; i <= n1 ; i++){
			L[i] = A[p + i - 1];
	}
	for (j = 1 ; j <= n2 ; j++){
		R[j] = A[q+j];
	}	
	L[n1 + 1] = MAX;
	R[n2 + 1] = MAX;
	i = 1;
	j = 1;
	for k = p to r
		if L[i] <= R[j]
			A[k] = L[i];
			i = i + 1;
		else A[k] = R[j]
			j = j + 1;
}

MERGE-SORT(int A[], int p, int r){
	if (p < r){
		q = (p + r) / 2;
		MERGE-SORT(A,p,q);
		MERGE-SORT(A,q+1,r);
		MERGE(A,p,q,r);
	}
}
