#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = s1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//输入一个数，把每位的数变成0/1。如果某一位是奇数，就把它变成1；否则变成0
//输入123，输出101
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	while (n)
//	{
//		int bit = n % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit * pow(10, i);
//		i++;
//		n = n / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印直角三角形*
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n-1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double price = 0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//	if (price < 0)
//		printf("%.2lf",0);
//	else
//		printf("%.2lf", price);
//	return 0;
//}

//左旋字符串中的字符
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 1; i <= k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

int main()
{

	return 0;
}