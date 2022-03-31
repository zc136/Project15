//指针数组是数组，用来存放指针
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 }; //整形数组
//	char ch[5] = { 0 };  //字符数组
//	int* p[4];  //存放整形指针的数组，指针数组
//	char* p1[5];//存放字符指针的数组，指针数组
//	return 0;
//}
int main()
{
	//int* p = NULL;  //p是整形指针，指向整形中的指针  可以存放整形的地址
	//char* pc = NULL;  //pc是字符指针，指向字符的指针，可以存放字符的地址
	//int arr[10] = { 0 };
	//arr  //首元素地址
	//	& arr[0]//首元素的地址
	//	& arr//数组的地址
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(p[i] + j));
		}
		printf("\n");
	}
	return 0;
}