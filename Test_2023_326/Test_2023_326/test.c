#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*一、常量
1. 字面常量
2. const修饰的常变量
3. #define修饰的标识符常量
4. 枚举常量

1. 字面常量
int main()
{
	3;//字面常量
	int num = 10;
	printf("%d\n", num);
	num = 20;  //此时的num是变量，是可以变的
	printf("%d\n", num);
	return 0;
}
输出：10
      20
//-----------------------------------------------------
2. const修饰的常变量
int main()
{
	const int num = 10;
	printf("%d\n", num);
	num = 20;
	int n = 10;
	//int arr[n] = { 0 };//报错，arr[]中要填一个常量
	//const int n = 10;//n是变量，但是有常属性，所以我们称为常变量
	//int arr[n] = { 0 };//报错，虽然n是const修饰的常变量，但n本质上还是一个变量
	return 0;
}
会报错，因为const修饰的常变量
//------------------------------------------------------
3. #define修饰的标识符常量
#define MAX 10
int main()
{
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}
输出：10   不报错
//--------------------------------------------------
4. 枚举常量
枚举：一一列举
比如：性别：男、女、保密
      三元色：红、黄、蓝
	  星期：一、二、三、四、五、六、日
枚举关键字：enum 
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}
enum Color
{
	RED,//默认值0
	YELLOW,//默认值1
	BLUE//默认值2
};
int main()
{
	enum Color c = RED;
	printf("%d\n", c);
	printf("%d\n", RED);
	c = YELLOW;
	printf("%d\n", c);
	//BLUE = 6;error报错，枚举常量是不能改的
	return 0;
}
//----------------------------------------------
二、字符串+转义字符 
1.字符串
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	// "abc"--{'a','b','c','\0'}
	//  \0是字符串的结束标志  "\0"--0，在计算字符串长度时，\0是结束标志，不算作字符串内容
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
//输出：abc
//      abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘟bc
//      abc
// "a"---97  "A"--65  ASCII编码
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	//strlen计算字符串长度
	return 0;
}
//输出：3  随机值  3
//-------------------------------------------
2. 转义字符
\n换行   \t水平制表符
??+)-->三字母词
int main()
{
	printf("(are you ok??)\n");
	return 0;
}
int main()
{
	printf("c:\test\32\test.c");
	printf("%d\n",strlen(c:\test\32\test.c));
	printf("%c\n",'\x61');
	return 0;
}
输出：c:	est->	est.c
      13
	  a
\32 ---32是 2个8进制数字
32作为八进制代表的那个十进制数字，作为ASCII值，对应的字符
32--对应十进制数字 26，十进制数字26作为ASCII值所代表的字符是一个向右的箭头->
\x61---61是两个16进制数字
61作为十六进制代表的那个十进制数字，作为ASCII值，对应的字符
61--对应十进制数字97，十进制数字97作为ASCII值所代表的的字符是一个小写a
-------------------------------------------------------------
\? -------在书写连续多个问号时使用，防止它们被解析成三字母词
\' -------用于表示字符常量’
\''-------用于表示一个字符串内部的''
\\ -------用于表示一个反斜杠，防止它被解释为一个转义序列符
\a -------警告字符，蜂鸣
\b -------退格符
\f -------进纸符
\n -------换行
\r -------回车
\t -------水平制表符
\v -------垂直制表符
\ddd -----ddd表示1-3个八进制的数，如：\130 X
\xdd -----dd表示2两个十六进制数字，如：\x30  0

int main()
{
	printf("c:\\test\\32\\test.c");
	return 0;
}
输出：c:\test\32\test.c

int main()
{
	printf("%s", "\"");
	return 0;
}
输出："

//-----------------------------------------
   
 三、 while循环

int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？<1/0>:");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("好offer\n");
	}
	else if(input == 0)
	{
		printf("没有好offer\n");
	}
	else
	{
		printf("输入错误\n");
	}
	return 0;
}
---------------------------------
int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if (line >= 20000)
	{
		printf("赢取白富美\n");
	}
	return 0;
	
}
自定义函数
Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int x = 0;
	int y = 0;
	int sum = 0;
	scanf("%d %d", &x, &y);
	sum = Add(x, y);
	printf("sum = %d\n", sum);
	return 0;
}
//---------------------------------------
四、数组
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
//--------------------------------------
五、操作符
1.左移/右移
int main()
{
	int a = 1;
	int b = a << 1;  //int-4字节-32比特位 00000000000000000000000000000001  左移变成 00000000000000000000000000000010 = 2
	printf("%d\n", b);
	return 0;
}
2.按位与/按位或/按位异或
int main()
{
	int a = 3;   //3-->00000000000000000000000000000011
	int b = 5;   //5-->00000000000000000000000000000101
	int c = a & b;  // 00000000000000000000000000000001=1
	int d = a | b;  // 00000000000000000000000000000111=7
	int e = a ^ b;  // 00000000000000000000000000000110=6
	printf("%d %d %d\n", c, d, e);
	return 0;
}
输出：1 7 6
3. 复合赋值符
int main()
{
	int a = 10;
	a = a + 10;
	//a += 10;
	printf("%d\n", a);
	return 0;
}
4. 单目操作符
int main()
{
	int a = 10;
	printf("%d ", sizeof(a));
	printf("%d ", sizeof(int));
	printf("%d ", sizeof a);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = 0;
	printf("%d ", sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d ", sz);
	return 0;
}
输出：4 4 4 40 10*/


