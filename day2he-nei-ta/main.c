/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{   
    int x=0;
    printf("input a number: ");
    scanf("%d",&x);
    
    cmove(x,'a','b','c');
    return 0;
}

//comve(盤子數量,來源,暫存,目的)
void cmove(int n,char a,char b ,char c){
    if(n==1){
        printf("Move %c to %c\n",a,c);
    }
    else{
        cmove(n-1,a,c,b);
        cmove(1,a,b,c);
        cmove(n-1,b,a,c);
    }
}