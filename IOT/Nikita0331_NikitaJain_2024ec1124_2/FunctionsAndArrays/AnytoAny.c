/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int any_dec(int n, int b)
{
    int rem,num=0,i=0;
    while(n>0)
    {
        rem = n%10;
        n=n/10;
        num = num + rem*pow(b,i++);
    }
    return num;
}

void dec_any(int n, int b)
{
    int bin[9],i=0;
    for(i=0;i<9;i++)
        bin[i]=-1;
    i=0;
    while(n>0)
    {
        bin[i++]=n%b;
        n = n/b;
    }
    printf("Converted number : ");
    for(i=8;i>=0;i--)
    {
        if(bin[i] != -1)
            printf("%d",bin[i]);
    }
}
int main() 
{
  int n,b1,b2;
  printf("Enter any base number : ");
  scanf("%d",&n);
  printf("Enter the base of given number : ");
  scanf("%d",&b1);
  printf("Enter the base which u want to convert : ");
  scanf("%d",&b2);
  int res = any_dec(n, b1);
  dec_any(res,b2);
  }