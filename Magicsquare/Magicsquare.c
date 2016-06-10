#include <stdio.h>
#define MAX_SIZE 15 // 最大方陣大小
#define EXIT_FAILURE 1 // implementation defined

void main (void)
{ // 反覆地產生一個大小為n的魔術方陣
    int square[MAX_SIZE][MAX_SIZE];
    int i, j, row, column; // 索引
    int count;             // 計數值
    int size;              // 方陣大小
    
    printf("Enter the size of the square:");
    scanf("%d", &size);
    // 檢查錯誤的輸入
    if (size < 1 || (size > MAX_SIZE+1)){
        fprintf(stderr, "Error! Size is out od range\n");
        exit(EXIT_FAILURE);
    }
    if (!(size %2)){
        fprintf(stderr, "Error! Size is out od even\n");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < size; i++)
      for (j = 0; j < size; j++)
        square[i][j] = 0;
    square[0][(size-1)/2] = 1; // 第一列的中間
    // i 跟 j 是目前的位置
    i = 0;
    j = (size -1)/2;
    for (count = 2; count <= size* size; count ++){
        row = (i-1<0) ? (size - 1) : (i - 1); // 上面
        column = (j-1<0) ? (size - 1) : (j - 1); // 左邊
        if(square[row][column]) // 下面
          i = (++i) % size;
        else{                   // square is unoccupied
            i = row;
            j = (j-1<0) ? (size-1) : --j;
        }
        square[i][j] = count;
    }
    // 輸出魔術方陣
    printf("Magic Square of size %d : \n\n", size);
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++)
          printf("%5d", square[i][j]);
        printf("\n");
    }
    printf("\n\n");
}