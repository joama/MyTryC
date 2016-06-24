#include <stdlib.h> // 用在 exit(EXIT_FAILURE)上
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1001
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void sort(int [], int); // 選擇排序
/*
void main(void){
	int i, n;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate:");
	scanf("%d", &n);
	if(n < 1 || n > MAX_SIZE){
		fprintf(stedrr,"Improper value of n\n");
		exit(EXIT_FAILURE);
	}
	for(i = 0; i < n ; i++){ // 隨機產生數值 
		list[i] = rand() % 1000;
		printf("%d",list[i]);
	}
	sort(list,n);
	printf("\n Sorted array:\n");
	for(i = 0; i < n ; i++) // 印出已排好序的數值 
		printf("%d",list[i]);
	printf("\n");
} 
*/
void sort(int list[], int n){
	int i, j, min, temp;
	for(i = 0; i < n-1 ; i++){
		min = i;
		for(j = i+1 ; j < n ; j++)
			if(list[j] < list[min])
				min = j;
		SWAP(list[i],list[min],temp);
	}
}
