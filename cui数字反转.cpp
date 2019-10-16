#include<stdio.h>
#include<stdlib.h>
 
//获取一个整数的位数 
int getWei(int num)
{
	int wei = 0;
	for(int iNum=num;iNum;iNum/=10)//依次去掉最低位 
	{
		printf("%d\n",iNum);//依次打印去掉最低位后的数字 
		wei++;
	}
	return wei;
}
 
int get10(int n)
{
	int res = 1;
	for(int i=0;i<n;i++)//从0到n进行循环
	{
		res*=10;
	} 
	return res;
}
int main()
{
	int num;
	scanf("%d",&num);
	int wei = getWei(num); 
	printf("%d的位数是%d\n",num,wei);
	int result = 0;//保存最终的翻转结果 
	for(int i=0;i<wei;i++)
	{
		int n;//
		n = num %10;//每次取出的最低位
		num = num / 10;//递归去掉最低位
		result = result+n*get10(wei-1-i);
	}
	printf("翻转后的数字是%d\n",result);
	return 0;
}
