/******************************************************************************

Welcome to GDB Online.

GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,

C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.

Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


void func (int[]);


void func (int a[])
{
  int temp;
  temp = a[0];
  a[0] = a[1];
  a[1] = temp;
}

int main ()
{
  int a[2] = { 3, 6 };
  printf ("a[0]=%d a[1]=%d\n", a[0], a[1]);
  func (a);
  printf ("a[0]=%d a[1]=%d\n", a[0], a[1]);
  system ("pause");
  return 0;
}
