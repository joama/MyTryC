#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selectionSort.h"
#define MAX_SIZE 1001

void main(void){
	int i, n, step = 10;
	int a[MAX_SIZE];
	double duration;
	
	// �ھ� n = 0, 10 , ..., 100. 200, ..., 1000 �ӭp�� 
	printf(" n repetitions time\n"); 
	for(n = 0; n <= 1000; n += step){
		// �ھ� n ���j�p�o��ɶ�
		long repetitions = 0;
		clock_t start = clock();
		do{
			repetitions++;
			
			// ��l�̮t���p�����
			for(i=0; i<n ; i++)
				a[i] = n - i;
			
			sort(a, n); 
		} while(clock() - start < 1000); // ���Ƴo�Ӱj�骽��w�g�α��F�������ɶ� 
		
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		duration /= repetitions;
		printf("%6d %9d %f\n", n, repetitions, duration);
		if(n == 100) step = 100;
	}
}
