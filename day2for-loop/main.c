/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void score();
void cal();
int S(int,int);

int main()
{
    printf("1.輸入十位學生的成績\n");
    printf("2.計算一元四次方程式\n");
    printf("輸入你想要的功能:");
    
    
    int choose=0;
    scanf("%d",&choose);
    
    switch(choose){
        case 1:
            score();
            break;
        case 2:
            cal();
            break;
        default:
            printf("無效功能");
    }
    system("pause");
    return 0;
}
void cal(){
    int i,f[5],x,ans=0;
    for(i=0;i<5;i++){
        printf("請輸入 x 的%d次方的係數");
        scanf("%d",&f[i]);
    }
    printf("輸入欲計算的X值:");
    scanf("%d",x);
    for(i=0;i<5;i++){
        ans=ans+S(x,i) * f[i];
    }
}

int  S(int x,int n){
    int i,tmp=x;
    if(n==0) return 1;
    for(i=1;i<n;i++){
        x=x*tmp;
    }
    return x;
}
void score(){
    int score[10];
    int total=0;
    int i=0;
    for( i=0;i<10;i++){
        printf("請輸入學生%d的成績:",i+1);
        scanf("%d",&score[i]);
    }
    for(i=0;i<10;i++){
        total=total + score[i];
    }
    
    printf("平均成績為:%f \n",(double)total/10);   
}

