#include<stdio.h>
int main()   
{ 
   int m, n, a, b, t, c;
   printf("请输入两个正整数\n");
   scanf("%d %d", &a, &b);
   m=a;   n=b;
   while(b!=0)  //结束循环的条件是余数为0
   { c=a%b; a=b;  b=c;}
   printf("最大公约数是 %d\n", a);
   printf("最小公倍数是 %d\n", m*n/a);
   return 0;
}

