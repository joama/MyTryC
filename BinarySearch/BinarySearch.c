#include <stdio.h>
#include <stdlib.h>
#define COMPARE(x,y) ((x) < (y) ? -1: ((x) == (y)) ? 0:1)

int main(void)
{
    int search, ans;
    int list[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};
    int left = 0;

    printf("請輸入欲搜尋的資料: ");
    scanf("%d", &search);

    // 呼叫函式進行搜尋
    ans = binsearch(list, search,left, sizeof(list) / sizeof(int));

    if (ans < 0)
    {
        printf("找不到 %d\n", search);
    }
    else
    {
        printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
    }

    system("pause");
}

int binsearch(int list[], int searchnum, int left, int right)
{
   
    while (left <= right){
        int middle = (left + right)/2;
        switch(COMPARE(list[middle], searchnum)){
            case -1: left = middle+1;
                     break;
            case 0 : return middle;
            case 1 : right = middle - 1;
        }
    }
    return -1;
}