#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void leftmove(char* str, int k)
//{
//	k = k % sz;
//	int sz = strlen(str);
//	while (k)
//	{
//		int i = 0;
//		int j = sz;
//		char tmp = *str;
//		while ((j--)- 1)
//		{
//			*(str + i)=*(str+i+1);
//			i++;
//		}
//		*(str + sz-1) = tmp;
//		k--;
//	}
//}

void leftmove(char* str, int k)
{
	int sz = strlen(str);
	k = k % sz;
	char tmp[256] = { 0 };
	strcpy(tmp, str+k);
	strncat(tmp, str, k);
	strcpy(str, tmp);
}

int main()
{
	char str[] ="abcdef";
	int k = 0;
	scanf("%d", &k);
	leftmove(str, k);
	printf("%s", str);
	return 0;
}

//int main()
//{
//	int arr[5][5] = { 1,2,3,4,5,8,10,11,15,27,30,32,33,35,40,80,90,101,110,116,118,121,521,666,999 };
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	int j = 4;
//	while (i<5 && j>=0)
//	{
//		if (arr[i][j] == input)
//		{
//			printf("数据存在，存在于arr[%d][%d]", i,j);
//			break;
//		}
//		else if (input < arr[i][j] )
//		{
//			j--;
//		}
//		else if (input > arr[i][j])
//		{
//			i++;
//		}
//	}
//	if (i >= 5 || j < 0)
//	{
//		printf("数据不存在\n");
//	}
//	return 0;
//}

//void yangHuiTriangle(int n)
//{
//	int data[30] = { 1 };
//
//	int i, j;
//	printf("1\n"); //第一行就直接打印了
//	for (i = 1; i < n; i++) //从第二行开始
//	{
//		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
//		{
//			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
//		}
//
//		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//
//int main()
//{
//	int n = 10;
//	yangHuiTriangle(n);
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a * b * c * d * e == 120)
//						{
//							if (((b == 2) + (a == 3)) == 1 && ((b == 2) + (e == 4)) == 1 && ((c == 1) + (d == 2)) == 1 &&
//								((c == 5) + (d == 3)) == 1 && ((e == 4) + (a == 1)) == 1)
//								printf("所有人名次为：A=%d  B=%d  C=%d  D=%d  E=%d  ", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("凶手是%c ", killer);
//	}
//	return 0;
//}







//#define ROW 10
//#define COL   10
//#define rCOL  COL+1
//#include<stdio.h>

//int main()
//{
//	int arr[ROW][rCOL] = { 0 };
//	arr[0][1] = 1;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < ROW; i++)
//	{
//		for (j = 1; j < rCOL; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 1; j < rCOL; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				printf("%3d  ", arr[i][j]);
//			}
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}