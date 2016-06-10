#include <stdio.h>
#include <stdlib.h>
#define COMPARE(x,y) ((x) < (y) ? -1: ((x) == (y)) ? 0:1)

int main(){

    int list[10],i,searchnum,left,c,right;

    printf("Enter the size of an array: ");
    scanf("%d",&searchnum);

    printf("Enter the elements of the array: " );
    for(i=0;i<searchnum;i++){
         scanf("%d",&list[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&left);

    right=0;
    c=binsearch(list,searchnum,left,right);
    if(c==0)
         printf("Number is not found.");
    else
         printf("Number is found.");

    return 0;
 }

int binsearch (int list[], int searchnum, int left , int right)
{
    
    int middle;
    if (left <= right){
        middle = (left + right)/2;
        switch(COMPARE(list[middle], searchnum)){
            case -1 : return binsearch
                 (list, searchnum, middle+1, right);
            case  0 : return middle;
            case  1 : return binsearch
                 (list, searchnum, left, middle - 1);
        }
    }
    return -1;
}