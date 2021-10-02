#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()//主函数-程序的入口-有且只有一个
//{
//	printf("hello 世界\n");
//	return 0;
//}

//
//int main()
/*{  */  //char-字符类型
	/*char ch = 'A';
	printf("%c\n",ch);
*/
//整形
//int age = 50;
 // printf("%d\n", age);
 //short int 短整型


 //%d  打印整形
 //%c  打印字符
 //%f  打印浮点数字//打印小数
 //%p  以地址的形式打印
 //%f  打印16进制
 //float f=5.0;
 //printf("%f\n",f);
 /*double d=3.14;
	printf("%lf\n",d);

	//float单精度浮点型-小数
///double双精度浮点型
	//
	//
	//
	//
*/
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//return 0;
//}
//计算两个数的和
//int main() 
//{ int num1 = 0;
// int num2 =  0;
// int sum = 0;
//scanf("%d%d",&num1,&num2);/*输入数据用输入函数scanf*/
// sum = num1 + num2,
//	 printf("sum=%d\n",sum);
//
//	return 0;
//}
//int  global = 2021;
// void test()
// {
//
//
//
//	 printf("test（）--%d\n",global);
// }
//int main()
//{ 
//	test();
//	printf("%d\n",global);
////	return 0;
//}
//int main()
//{
//	//未声明的标识符
//	//extern 声明外部的符号 
//	extern int  g_val;
//	printf("g_val=%d\n", g_val);
//
//
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2,	
//		printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{//const-常属性
//	//const修饰的常变量
//	const int n = 10;//n是变量，但是又有常属性，所以说 n是常变量
//	//int arr[n]= {0};
//	n = 20;
//	
//	

	//const  int num=4;
	//printf("%d\n",num);
	//num=8;
	//printf("%d\n",num);
	//3;//字面常量
	/*return 0;
}*/
//#define定义的常量

//#define MAX 10
//int main()
//{
//	int arr[MAX]={0};
//	printf("%d\n",MAX);
//
//
//	return 0;
//}
//枚举常量-一一列举
//性别，男，女，保密。
//星期
//枚举关键字
//enum  Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//int main()
//{
//	/*enum Sex=MALE;*/
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//	return 0;
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	printf("%d\n",RED);
//	printf("%d\n",YELLOW);
//	printf("%d\n",BLUE);
//	
//	return 0;
//}
//int main()
//{
//   char arr1[]="abc";//数组
//   //"abc"--'a','b','c'\'0'    '\0'是字符串的结束标志
//   char arr2[]={'a','b','c',0};
//   printf("%s\n",arr1);
//   printf("%s\n",arr2);
//
//	return 0;
//}

//int main()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//int main()
//{
//	/*printf("abc\n");*/
//	\n表示换行  \t水平制表符
//
//	printf("(are you ok??)");
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n",strlen("c:test\32\test.c"));
//	printf("%c\n",'\328');
//	//\32--表示2个8进制数字 --代表的那个十进制数字对应的ASCII码值，对应的字符
//		
//
////
////printf("%c\n",'\x61');
//////\x61表示16进制
//		return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）");
//	scanf ("%d",&input);
//	if(input == 1)
//	printf("好工作\n");
//	else  
//	printf("卖红薯\n");
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	/*printf("加入比特\n");*/
//	while(line<20000)//循环语句
//	{
//	printf("打游戏,%d\n",line);
//	line++;
//	}
//	if(line>=20000)
//	printf("卖红薯\n");
//	return 0;
//}
//int Add(int x,int y)//Add自定义函数
//{
//	int z= x + y;
//	return z;
//}
//int main()
//{int sum1= 0;
// int sum2= 0;
//     int num1=10;
//	 int num2=20;
//	 int a=1;
//	 int b=2;
//	/*sum=num1+num2;*/
//	 sum1 = Add(num1,num2);
//	 sum2 = Add(a,b);
//	printf("%d\n",sum1);
//	printf("%d\n",sum2);
//	return 0;
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组，1-0,2-1......
//	//printf("%d\n",arr[5]);//下标的方式访问元素
//	int i=0;
//	while(i<10)
//	{
//		printf("%d",arr[i]);
//		i++;
//	}return 0;
//}
//int main()
//{
//	////int a = 5/2;//只有商，无余数
//	////	printf("%d\n",a);
//	//int a = 5%2;//取余数
//	//printf("%d\n",a);
////	int a = 1;//整形占四个字节，32个比特位
////	//移位操作符<< --向左移（比特位）位    >>---向左移（比特位）位
////	printf("%d\n",a);
////	int b = a<<2;//左移两位
////
////
////
////	//b=a+1
////printf("%d\n",b);
////		
//int a = 3;
//int b = 5;
//int c = a&b;
//int d = a|b;
//int e = a^b;
////位操作
////&按位与
////|按位或
////^按位异或 (相同为0，相异为1)
////011
////101
////&  001  =1
////|  111  =7
////^  110  =6  
////printf("%d\n",c);
////
//printf("%d\n",c);
//printf("%d\n",d);
//printf("%d\n",e);
//	return 0;
//}
//int main()
//{
//
//	int a =1;
//       /*a=a+10;*///或者
//	  /* a+=10;*/
//	   a&=2;
//	printf("%d\n",a);
//		return 0;
//}
//0表示假  非0真
//int main()
//{
//	int a=10;
//	printf("%d\n",a);
//	printf("%d\n",!a);//  ！逻辑反操作，变成假0
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(a));//四个字节
//	//sizeof计算的是变量/类型所占的空间大小，单位是字节
//	printf("%d\n",sizeof(int));//与上面等同
//	printf("%d\n",sizeof a);
//	printf("%d\n",sizeof int);//只能把变量的括号去掉，类型不能
//	return 0;
//
//}
//int main()
//{   int x = 0;
//	int arr[10]= {0};//10个整形元素的数组
//	//printf("%d\n",sizeof(arr));//10*sizeof(int) = 40
//	//计算数组的元素个数
//	//数组总大小/每个元素的大小= 个数
//	x = sizeof(arr)/sizeof(arr[0]);
//	printf("x = %d\n",x);
//
//
//
//	return 0;
//}

//选一个最大值
//int Max(int x, int y)
// {if (x > y)
//	return x;
//else 
//	return y;
//}
//
//
//int main()
//{
//	int num1= 10,num2= 20;
//	int z = 0;
//	z = Max(num1,num2);
//		printf("z=%d\n",z);
//	
//return 0;
//}
//int main()
//{
//	int a = 10 ;
//	int arr[]={2,3,4,5,6};//4*7=28
//	printf("%d\n",sizeof a)	;
//	printf("%d\n",sizeof (int))	;
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr)/sizeof arr[0]);
//
//	return 0;
//int main()
//	{
//		int a = 0;
//		int b =  ~a;
//		printf("%d\n",b);
//return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	int c = ++a;///前置++，先++,再使用
//	printf("%d\n",c);
//	//printf("%d\n",b);
//	printf("%d\n",a);
//return 0;
//}
//int main()
//{int a=10;
//int b = a--;
//printf("%d\n",a);
//printf("%d\n",b);
//return 0;
//}
//int main()
//{
//	float weight;
//	float value;
//	printf("你的体重值多少白金呢\n");
//	printf("让我们检测一下\n");
//	printf("请输入你的体重\n");
//	scanf("%f", &weight);
//	value = 1700.0 * weight * 14.5833;
//	printf("你的体重转化成白金值$%.2f.\n", value);//%.2f意思为制定浮点数只显示小数点后两位int
//
//	return 0;
//
//}
//int main()
//{
//	float salary;//\b退格,\r回车：回到起始处，\t水平制符表：该行的第九列（一般情况下 ），'\n换行：下一行的起始处
//	printf("输入你渴望的月薪：");
//	printf("$______\b\b\b\b\b\b");
//	scanf("%f",&salary);
//	printf("\n\t$%.2f 一月是$%.2f 一年",salary,salary * 12);
//	printf("\rgood\n");
//
//	return 0;
//}
//输入你渴望的月薪:40000.00
 //一月是$%.2f 一年
//int main()
//{
//	int a = 10;
//	/*int b = a++;*///后置++，先使用，再++
//	/*int c = --a;*///前置++，先++，再使用
//	int d = a--;
//	printf("%d\n", a);
//	/*printf("%d\n", b);*/
//	/*printf("%d\n", c);*/
//	printf("% d\n", d);
//	return 0;
//}
//int main()
//{
//	int q = (int)3.14;//()强制类型转换 double---int
//	p5;rintf("%d\n", q);
//	return 0;
//
//}
//  !=意思是不等于，==是等于
//int main()
//{
//	int a = 3;//0 为假 ，非零为真，
//	int b = 0;
//	int c = a && b;//&&逻辑与（判断两边数的真假）
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 3;//0 为假 ，非零为真，
//	int b = 5;
//	int c = a || b;//  ||逻辑或（判断两边数的真假）两假才假
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 6;
//	int b = 2;
//	int max;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);//条件操作符或三目操作符：exp1?exp2:exp3(满足条件a的表达式，输出exp2,否则输出exp3)
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	arr[4];//[]-下标引用操作符
//	return 0;
//}
//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a , b);
//	printf("%d\n", sum);
//	return 0;
//}
//1 --整形--32 比特位
//-1 --整形--32 比特位
//[0][][][][][][][][][][][][][][][][][][][][][][][]//最高位是0，是负数
//[1][][][][][][][][][][][][][][][][][][][][][][][]//最高位是1，是正数
//原码111111111111111111111111
//反码100000000000000000000000按位取反（除最高位）
//补码100000000000000000000001反码+1，只要是整数，内存中存储的都是二进制的补码
//正数原码，反码，补码都相同
//负数存补码
//int main()
//{
//	register int z = 1;//局部变量--自动变量（auto）
//	return 0;//register--建议把z定义为寄存器变量
//}
//int main()
//{
//	typedef unsigned int uint;
//	unsigned int a = 1;
//	uint b = 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//void test()
//{
//	static int b = 1; //是一个静态的局部变量
//	b++;
//	printf("%d\n", b);
//}//static修饰局部变量，使局部变量生命周期变长
//int main()
//{
//	int a = 0;
//	while (a < 5)
//	{
//		test();
//		a++;
//	}
//
//	return 0;
//}
//int main()
//{
//	extern int g_val;//修饰全局变量，改变了变量的作用域
//	printf("g_val = %d\n", g_val);
//	return 0;
//}//让静态的全局变量只能在自己所在的源文件中使用
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}