#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	//int const *p=&a; ����д����һ���ģ���������*p ������*�����
//	p = &b;
//	p = &b;
//	printf("%d", a);
//	return 0;
//}
//int main()
////{
////	int a = 20;
////	a = 30;//�ֲ������ǿ����޸ĵ�
////	const int b = 10;
////	b = 15;//��const���ε�b�޷����޸ģ���ʼ����Ͳ����޸���
////	return 0;
////}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//��һ�ִ����㵽\0֮ǰ��Ԫ�ظ���
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
//�ڶ������õݹ���
int my_strlen2(char* pa)
{
	if (*pa != '\0')
		return 1 + my_strlen2(pa + 1);
}
//����������     ָ��-ָ��==����ָ��֮��Ԫ�صĸ���
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
////qsort����ģ��
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
//			//�ȽϺ������Ƚ���������Ԫ��
//			if (com_int((char*)base+j*width,(char*)base+(j+1)*width)>0)//���������������������e1 ��e2.
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