#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define ROW 13
#define COL ROW
#include<string.h>

int main()
{
	char a = '*';
	char arr[ROW][COL] = { ' ' };
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}
	int midCOL = COL / 2 ;
	int midROW = ROW / 2;
	for (i = 0; i <=midROW; i++)
	{
		for (j = midCOL-i; j <= midCOL+i; j++)
		{
			arr[i][j] = '*';
		}
	}
	for (i = midROW + 1; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = arr[midROW * 2 - i][j];
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//#include<stdio.h>
//#include<math.h>
//#define MAX 100000
//
//int NarNumber(int a)
//{
//	int arr[10] = { 0 };
//	int count = 0;
//	int sum = 0;
//	int i = 0;
//	for(i=a;i; i /= 10)
//	{
//		arr[count] = i % 10;
//		count++;
//	}
//	for (i = 0; i < count; i++)
//	{
//		sum = sum + pow(arr[i], count);
//	}
//	if (sum == a)
//		return 1;
//	else
//		return 0;
//
//	/*int digits = 0;
//	int start = a;
//	int initial = a;
//	while (a)
//	{
//		a = a / 10;
//		digits++;
//	}
//	int num = 0;
//	while (start != 0)
//	{
//		num = num+pow(start % 10,digits);
//		start = start / 10;
//	}
//	if (num == initial)
//		return 1;
//	else
//		return 0;*/
//}
//
//int main()
//{
//	printf("从0到%d之间的水仙花数为：\n",MAX);
//	int i = 1;
//	for (i = 1; i <= MAX; i++)
//	{
//		if (NarNumber(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int sum(int a,int b)
//{
//	int count = 0;
//	int ret = a;
//	int s = a;
//	while (b)
//	{
//		ret = ret * 10;
//		b--;
//	}
//	while (a < ret)
//	{
//		count = count + a;
//		a = s + a * 10;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 5;
//	printf("请输入一个数字：");
//	scanf("%d", &a);
//	printf("\n");
//
//	printf("求前几项和？");
//	scanf("%d", &b);
//	printf("\n");
//
//	int rec=sum(a,b);
//	printf("%d", rec);
//	return 0;
//}

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