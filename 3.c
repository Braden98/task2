#include<stdio.h>
int main(){
int  n;//次数
double a=2,b=1,sum=0;//分子与分母 和
int x;

printf("请输入项数\n");
while(1){
	scanf("%d",&n);
	if(n<0)
	printf("请输入非负整数\n");
	else
	break;
}
for(int i=n;i>0;i--)
{
	sum+=a/b;
	a=b+(b=a);
//	printf("%.1lf %.1lf\n",a,b);
	}
printf("前%d项和为 %.2lf\n",n,sum);

return 0;
}
