#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Print(char * str)
{
	printf("%s\n", str);

}
//int main()
//{//�������Ĳ���Ϊ����ָ��ʱ�����Խ���ʲô����
//	//char * p;//һ��ָ�����p�ĵ�ַ&p
//	//char **pc;//����ָ���������
//	//char* arr[10];//���һ��ָ�������������
//	//&������ �ͺ��������� �����ĵ�ַ	
//	//ָ�뺯��
//	void(*p)(char *) = Print;
//	(*p)("hello bit");
//	void(*signal(int, void(*)(int)) )(int);//signal��һ���������� signal�����Ĳ�������������һ����int �ڶ����Ǻ���ָ�룬�ú���ָ��ָ��Ĳ�����int������������void
//	//signal�ķ�������Ҳ�Ǻ���ָ�룬�ú���ָ��ָ��Ĳ�����int������������void
//	typedef   void(*fun)(int);
//	fun  signal(int, fun) ;
//	return 0;
//}
//((void (* )())0)()��0����ǿ������ת���� ����ָ������ ���к����Ĳ���


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
//	//printf("%d\n", *p(2, 3));//����
//
//
//
//
//	return 0;
//}
int main()
{
	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//��Ҫһ�����飬���������Դ��4�������ĵ�ַ������ָ�������

	return 0;
}