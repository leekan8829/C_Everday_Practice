/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    //字串就是一串文字，在 C 談到字串的話，一個意義是指字元組成的陣列，最後加上一個空（null）字元 '\0'，例如底下是個 "hello" 字串：
    char text[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", text);
    char name[]=u8"李庚穎";
    printf("%s\n",name);
    
    int i,j;
    int a[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            a[i][j]=i;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
