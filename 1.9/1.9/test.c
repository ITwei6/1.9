#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	//int const *p=&a; 两种写法是一样的，都是修饰*p 都是在*的左边
//	p = &b;
//	p = &b;
//	printf("%d", a);
//	return 0;
//}
//int main()
////{
////	int a = 20;
////	a = 30;//局部变量是可以修改的
////	const int b = 10;
////	b = 15;//被const修饰的b无法再修改，初始化后就不能修改了
////	return 0;
////}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//第一种纯计算到\0之前的元素个数
int my_strlen1(char* pa)
{
	int count = 0;
	while (*pa)
	{
		count++;
		pa++;
	}
	return count;
}
//第二种利用递归算
int my_strlen2(char* pa)
{
	if (*pa != '\0')
		return 1 + my_strlen2(pa + 1);
}
//第三种利用     指针-指针==两个指针之间元素的个数
int my_strlen3(char* pa)
{
	char* str = pa;
	while (*pa)
	{
		pa++;
	}
	return pa - str;
}
int main()
{
	char a[] = "abcdef";
	int ret=my_strlen3(a);
	printf("%d", ret);
	return 0;
}
////qsort函数模拟
//void Swap(char* buf1, char* buf2,size_t width)
//{
//	int i;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int com_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//void my_bubble_qsort(void* base, size_t num, size_t width, int(*com_int)(const void* e1, const void* e2))
//{
//
//	int i;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//比较函数：比较相邻两个元素
//			if (com_int((char*)base+j*width,(char*)base+(j+1)*width)>0)//调用这个函数将参数传给e1 和e2.
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bubble_qsort(arr, sz, sizeof(arr[0]),com_int);
//	int i;
//	for (i = 0;i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}