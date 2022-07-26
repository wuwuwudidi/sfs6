#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Print(char * str)
{
	printf("%s\n", str);

}
//int main()
//{//当函数的参数为二级指针时，可以接收什么参数
//	//char * p;//一级指针变量p的地址&p
//	//char **pc;//二级指针变量本身
//	//char* arr[10];//存放一级指针数组的数组名
//	//&函数名 和函数名都是 函数的地址	
//	//指针函数
//	void(*p)(char *) = Print;
//	(*p)("hello bit");
//	void(*signal(int, void(*)(int)) )(int);//signal是一个函数声明 signal函数的参数有两个，第一个是int 第二个是函数指针，该函数指针指向的参数是int，返回类型是void
//	//signal的返回类型也是函数指针，该函数指针指向的参数是int，返回类型是void
//	typedef   void(*fun)(int);
//	fun  signal(int, fun) ;
//	return 0;
//}
//((void (* )())0)()将0进行强制类型转换成 函数指针类型 进行函数的操作


int Add(int x, int y)
{
	return x + y;

}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int(*p)(int, int) = Add;
//	printf("%d\n", (p)(2, 3));
//	printf("%d\n", (*p)(2, 3));
//	printf("%d\n", Add(2, 3));
//	//printf("%d\n", *p(2, 3));//错误，
//
//
//
//
//	return 0;
//}
int main()
{
	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//需要一个数组，这个数组可以存放4个函数的地址，数组指针的数组

	return 0;
}