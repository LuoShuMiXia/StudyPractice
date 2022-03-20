#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int sum(int a,int b)
{
	int count = 0;
	int ret = a;
	int s = a;
	while (b)
	{
		ret = ret * 10;
		b--;
	}
	while (a < ret)
	{
		count = count + a;
		a = s + a * 10;
	}
	return count;
}

int main()
{
	int a = 1;
	int b = 5;
	printf("请输入一个数字：");
	scanf("%d", &a);
	printf("\n");

	printf("求前几项和？");
	scanf("%d", &b);
	printf("\n");

	int rec=sum(a,b);
	printf("%d", rec);
	return 0;
}

//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* start = str;
//	char* end = &str[len-1];
//	while (end-start>1)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		end--;
//		start++;
//	}
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	reverse(str);
//	printf("%s ", str);
//	return 0;
//}


//void print(int* arr,int ret)
//{
//	int i = 0;
//	for(i=0;i<ret;i++)
//	{
//		printf("%d ", *arr + i);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	print(arr,ret);
//	return 0;
//}