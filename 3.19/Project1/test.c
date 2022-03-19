#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	printf("请输入两个整数：");
	scanf("%d%d", &x, &y);
	int tmp = x ^ y;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	/*while (tmp)
	{
		tmp = tmp >> 1;
		if (tmp & 1)
			count++;
	}*/
	printf("不同的数量为：%d", count);
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入初始值为：");
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后值为：a=%d,b=%d",a,b);
//}

//int main()
//{
//	int x = 0;
//	printf("请输入整数：");
//    scanf("%d", &x);
//	int count = 0;
//	do 
//	{
//		if (x % 2 == 1)
//			count++;
//		x/= 2;
//	} while (x);
//	printf("该数据二进制中含有1的数量是：%d", count);
//	return 0;
//}

//int main()
//{
//    int x = 0;
//    printf("请输入整数：");
//    scanf("%d", &x);
//    int arr1[16] = { 0 };
//    int arr2[16] = { 0 };
//    int a = 15;
//    int b = 15;
//    int count = 0;
//    do
//    {
//        int ret = count % 2;
//        if (ret==0)
//        {
//            arr2[a] = x % 2;
//            a--;
//        }
//        else
//        {
//            arr1[b] = x % 2;
//            b--;
//        }
//        x /= 2;
//        count++;
//    } while (x);
//
//    int i = 0;
//    for (i = 0; i < 16; i++)
//    {
//        printf("%d", arr1[i]);
//    }
//    printf("\n");
//    for (i = 0; i < 16; i++)
//    {
//        printf("%d", arr2[i]);
//    }
//}


//int main()
//{
//    int x = 0;
//    int y = 0;
//    printf("请输入两个整数：");
//    scanf("%d %d", &x, &y);
//    if (x < y)
//    {
//        int tmp = x;
//        x = y;
//        y = tmp;
//    }
//        int count = 0;
//        do
//        {
//            int recx = x % 2;
//            int recy = y % 2;
//            if (recx != recy)
//                count++;
//            x= x/2;
//            y= y/2;
//        } while (x);
//        printf("不同的数量为：%d", count);
//    
//}