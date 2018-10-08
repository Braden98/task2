#include<stdio.h>

int main(){
int number,sum=0;
printf("输入正整数可求其中奇数和，输入非正数结束输入\n");
while(1){
	scanf("%d",&number);
	if(number<=0)
		break;
	if(number%2)
		sum+=number;
}
printf("奇数和为%d\n",sum);

return 0;
}

