/******************************************************************************

leetcode 
給定一組陣列找出陣列裡面只有出現一次的數字
其他數字都會出現兩次

利用XOR來解這題
XOR會有交換律，效果會跟bubble sort依樣
可在O(n)下完成

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[]={2,2,1,3,3,4,4};
    int i=0;
    int length=sizeof(a)/sizeof(a[0]);
    for(i = 0;i<length;i++){
        printf("%d ",a[i]);
    }
    printf("\nAfter XOR:");
    int result=a[0];
    
    for(i=1;i<length;i++){
        result^=a[i];
    }
    printf("%d",result);
    return 0;
}

