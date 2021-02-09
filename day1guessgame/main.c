/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int answer=rand() %10000;
    int left=1;
    int right=10000;
    
    while(1){
        int guess;
        printf("目前範圍為%d~%d ,請猜密碼: ",left,right);
        scanf("%d",&guess);
        if(guess>right ||  guess<left) exit(1);
        if(guess==right) break;
        else{
            if(guess>answer) right=guess;
            else left=guess;
        }
    }
    printf("U got it!");
    system("pause");
    
}

