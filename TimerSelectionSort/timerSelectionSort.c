#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selectionSort.h"
#define MAX_SIZE 1001

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) {
	return 0;
}
*/

void main(void){
	int i, n, step = 10;
	int a[MAX_SIZE];
	double duration;
	clock_t start;
	
	// �ھ� n = 0, 10, ..., 100, 200, ..., 1000 �ӭp��
	printf(" n time\n");
	for(n = 0; n <= 1000; n += step) { // �ھ�n���j�p�o��ɶ�
	
	// ��l�̮t���p�����
	for(i = 0; i < n ; i++)
		a[i] = n - i;
		
	start = clock();
	sort(a, n);
	duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
	printf("%6d %f\n", n, duration);
	if(n == 100) step = 100;
	}
}
