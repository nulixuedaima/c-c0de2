#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*һ������
1. ���泣��
2. const���εĳ�����
3. #define���εı�ʶ������
4. ö�ٳ���

1. ���泣��
int main()
{
	3;//���泣��
	int num = 10;
	printf("%d\n", num);
	num = 20;  //��ʱ��num�Ǳ������ǿ��Ա��
	printf("%d\n", num);
	return 0;
}
�����10
      20
//-----------------------------------------------------
2. const���εĳ�����
int main()
{
	const int num = 10;
	printf("%d\n", num);
	num = 20;
	int n = 10;
	//int arr[n] = { 0 };//����arr[]��Ҫ��һ������
	//const int n = 10;//n�Ǳ����������г����ԣ��������ǳ�Ϊ������
	//int arr[n] = { 0 };//������Ȼn��const���εĳ���������n�����ϻ���һ������
	return 0;
}
�ᱨ����Ϊconst���εĳ�����
//------------------------------------------------------
3. #define���εı�ʶ������
#define MAX 10
int main()
{
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}
�����10   ������
//--------------------------------------------------
4. ö�ٳ���
ö�٣�һһ�о�
���磺�Ա��С�Ů������
      ��Ԫɫ���졢�ơ���
	  ���ڣ�һ�����������ġ��塢������
ö�ٹؼ��֣�enum 
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
	RED,//Ĭ��ֵ0
	YELLOW,//Ĭ��ֵ1
	BLUE//Ĭ��ֵ2
};
int main()
{
	enum Color c = RED;
	printf("%d\n", c);
	printf("%d\n", RED);
	c = YELLOW;
	printf("%d\n", c);
	//BLUE = 6;error����ö�ٳ����ǲ��ܸĵ�
	return 0;
}
//----------------------------------------------
�����ַ���+ת���ַ� 
1.�ַ���
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	// "abc"--{'a','b','c','\0'}
	//  \0���ַ����Ľ�����־  "\0"--0���ڼ����ַ�������ʱ��\0�ǽ�����־���������ַ�������
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
//�����abc
//      abc�����������������������������abc
//      abc
// "a"---97  "A"--65  ASCII����
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	//strlen�����ַ�������
	return 0;
}
//�����3  ���ֵ  3
//-------------------------------------------
2. ת���ַ�
\n����   \tˮƽ�Ʊ��
??+)-->����ĸ��
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
�����c:	est->	est.c
      13
	  a
\32 ---32�� 2��8��������
32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCIIֵ����Ӧ���ַ�
32--��Ӧʮ�������� 26��ʮ��������26��ΪASCIIֵ��������ַ���һ�����ҵļ�ͷ->
\x61---61������16��������
61��Ϊʮ�����ƴ�����Ǹ�ʮ�������֣���ΪASCIIֵ����Ӧ���ַ�
61--��Ӧʮ��������97��ʮ��������97��ΪASCIIֵ������ĵ��ַ���һ��Сдa
-------------------------------------------------------------
\? -------����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
\' -------���ڱ�ʾ�ַ�������
\''-------���ڱ�ʾһ���ַ����ڲ���''
\\ -------���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
\a -------�����ַ�������
\b -------�˸��
\f -------��ֽ��
\n -------����
\r -------�س�
\t -------ˮƽ�Ʊ��
\v -------��ֱ�Ʊ��
\ddd -----ddd��ʾ1-3���˽��Ƶ������磺\130 X
\xdd -----dd��ʾ2����ʮ���������֣��磺\x30  0

int main()
{
	printf("c:\\test\\32\\test.c");
	return 0;
}
�����c:\test\32\test.c

int main()
{
	printf("%s", "\"");
	return 0;
}
�����"

//-----------------------------------------
   
 ���� whileѭ��

int main()
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��<1/0>:");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("��offer\n");
	}
	else if(input == 0)
	{
		printf("û�к�offer\n");
	}
	else
	{
		printf("�������\n");
	}
	return 0;
}
---------------------------------
int main()
{
	int line = 0;
	printf("�������\n");
	while (line < 20000)
	{
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if (line >= 20000)
	{
		printf("Ӯȡ�׸���\n");
	}
	return 0;
	
}
�Զ��庯��
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
�ġ�����
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
�塢������
1.����/����
int main()
{
	int a = 1;
	int b = a << 1;  //int-4�ֽ�-32����λ 00000000000000000000000000000001  ���Ʊ�� 00000000000000000000000000000010 = 2
	printf("%d\n", b);
	return 0;
}
2.��λ��/��λ��/��λ���
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
�����1 7 6
3. ���ϸ�ֵ��
int main()
{
	int a = 10;
	a = a + 10;
	//a += 10;
	printf("%d\n", a);
	return 0;
}
4. ��Ŀ������
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
�����4 4 4 40 10*/


