#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//void Reorder(int* arr, const int count)
//{
//	assert(*arr != '\0');
//
//	int j = count-1;
//	int i = 0;
//	for (i = 0; i < count ; i++)
//	{
//		if (*(arr + i) % 2 == 0)
//		{
//			for (j = count - 1; j > i; j--)
//			{
//				if (*(arr + j) %2== 1)
//				{
//					int tmp = *(arr + i);
//					*(arr + i) = *(arr + j);
//					*(arr + j) = tmp;
//					break;
//				}
//			}
//		}
//		if (j <= i)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int count = sizeof(arr) / sizeof(arr[0]);
//	Reorder(arr,count);
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}

//void mystrcpy(char* str,  const char* arr)
//{
//	while(*arr)
//	{
//		*(str++) = *(arr++);
//	}
//	*str = *arr;
//}
//
//int main()
//{
//	char arr[] = "abcdefghij";
//	char str[20] = { 0 };
//	mystrcpy(str, arr);
//
//	printf("%s\n", arr);
//	printf("%s\n", str);
//	return 0;
//}

//int mystrlen(const char* arr)
//{
//	const char *str= arr;
//	while (*(arr++) )
//	{
//	}
//	return arr-str-1;
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int ret = mystrlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcd";
//	int i = 0;
//	char* p = &arr;
//	while (*p)
//	{
//		p++;
//	}
//	printf("%d\n", p - &arr[0]);
//	while (i++)
//	{
//
//	}
//	printf("%d", i);
//	return 0;
//}