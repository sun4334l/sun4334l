#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()//������-��������-����ֻ��һ��
//{
//	printf("hello ����\n");
//	return 0;
//}

//
//int main()
/*{  */  //char-�ַ�����
	/*char ch = 'A';
	printf("%c\n",ch);
*/
//����
//int age = 50;
 // printf("%d\n", age);
 //short int ������


 //%d  ��ӡ����
 //%c  ��ӡ�ַ�
 //%f  ��ӡ��������//��ӡС��
 //%p  �Ե�ַ����ʽ��ӡ
 //%f  ��ӡ16����
 //float f=5.0;
 //printf("%f\n",f);
 /*double d=3.14;
	printf("%lf\n",d);

	//float�����ȸ�����-С��
///double˫���ȸ�����
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
//�����������ĺ�
//int main() 
//{ int num1 = 0;
// int num2 =  0;
// int sum = 0;
//scanf("%d%d",&num1,&num2);/*�������������뺯��scanf*/
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
//	 printf("test����--%d\n",global);
// }
//int main()
//{ 
//	test();
//	printf("%d\n",global);
////	return 0;
//}
//int main()
//{
//	//δ�����ı�ʶ��
//	//extern �����ⲿ�ķ��� 
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
//{//const-������
//	//const���εĳ�����
//	const int n = 10;//n�Ǳ������������г����ԣ�����˵ n�ǳ�����
//	//int arr[n]= {0};
//	n = 20;
//	
//	

	//const  int num=4;
	//printf("%d\n",num);
	//num=8;
	//printf("%d\n",num);
	//3;//���泣��
	/*return 0;
}*/
//#define����ĳ���

//#define MAX 10
//int main()
//{
//	int arr[MAX]={0};
//	printf("%d\n",MAX);
//
//
//	return 0;
//}
//ö�ٳ���-һһ�о�
//�Ա��У�Ů�����ܡ�
//����
//ö�ٹؼ���
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
//   char arr1[]="abc";//����
//   //"abc"--'a','b','c'\'0'    '\0'���ַ����Ľ�����־
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
//	\n��ʾ����  \tˮƽ�Ʊ��
//
//	printf("(are you ok??)");
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n",strlen("c:test\32\test.c"));
//	printf("%c\n",'\328');
//	//\32--��ʾ2��8�������� --������Ǹ�ʮ�������ֶ�Ӧ��ASCII��ֵ����Ӧ���ַ�
//		
//
////
////printf("%c\n",'\x61');
//////\x61��ʾ16����
//		return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��");
//	scanf ("%d",&input);
//	if(input == 1)
//	printf("�ù���\n");
//	else  
//	printf("������\n");
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	/*printf("�������\n");*/
//	while(line<20000)//ѭ�����
//	{
//	printf("����Ϸ,%d\n",line);
//	line++;
//	}
//	if(line>=20000)
//	printf("������\n");
//	return 0;
//}
//int Add(int x,int y)//Add�Զ��庯��
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
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ����飬1-0,2-1......
//	//printf("%d\n",arr[5]);//�±�ķ�ʽ����Ԫ��
//	int i=0;
//	while(i<10)
//	{
//		printf("%d",arr[i]);
//		i++;
//	}return 0;
//}
//int main()
//{
//	////int a = 5/2;//ֻ���̣�������
//	////	printf("%d\n",a);
//	//int a = 5%2;//ȡ����
//	//printf("%d\n",a);
////	int a = 1;//����ռ�ĸ��ֽڣ�32������λ
////	//��λ������<< --�����ƣ�����λ��λ    >>---�����ƣ�����λ��λ
////	printf("%d\n",a);
////	int b = a<<2;//������λ
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
////λ����
////&��λ��
////|��λ��
////^��λ��� (��ͬΪ0������Ϊ1)
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
//       /*a=a+10;*///����
//	  /* a+=10;*/
//	   a&=2;
//	printf("%d\n",a);
//		return 0;
//}
//0��ʾ��  ��0��
//int main()
//{
//	int a=10;
//	printf("%d\n",a);
//	printf("%d\n",!a);//  ���߼�����������ɼ�0
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(a));//�ĸ��ֽ�
//	//sizeof������Ǳ���/������ռ�Ŀռ��С����λ���ֽ�
//	printf("%d\n",sizeof(int));//�������ͬ
//	printf("%d\n",sizeof a);
//	printf("%d\n",sizeof int);//ֻ�ܰѱ���������ȥ�������Ͳ���
//	return 0;
//
//}
//int main()
//{   int x = 0;
//	int arr[10]= {0};//10������Ԫ�ص�����
//	//printf("%d\n",sizeof(arr));//10*sizeof(int) = 40
//	//���������Ԫ�ظ���
//	//�����ܴ�С/ÿ��Ԫ�صĴ�С= ����
//	x = sizeof(arr)/sizeof(arr[0]);
//	printf("x = %d\n",x);
//
//
//
//	return 0;
//}

//ѡһ�����ֵ
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
//	//int b = a++;//����++����ʹ�ã���++
//	int c = ++a;///ǰ��++����++,��ʹ��
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
//	printf("�������ֵ���ٰ׽���\n");
//	printf("�����Ǽ��һ��\n");
//	printf("�������������\n");
//	scanf("%f", &weight);
//	value = 1700.0 * weight * 14.5833;
//	printf("�������ת���ɰ׽�ֵ$%.2f.\n", value);//%.2f��˼Ϊ�ƶ�������ֻ��ʾС�������λint
//
//	return 0;
//
//}
//int main()
//{
//	float salary;//\b�˸�,\r�س����ص���ʼ����\tˮƽ�Ʒ������еĵھ��У�һ������� ����'\n���У���һ�е���ʼ��
//	printf("�������������н��");
//	printf("$______\b\b\b\b\b\b");
//	scanf("%f",&salary);
//	printf("\n\t$%.2f һ����$%.2f һ��",salary,salary * 12);
//	printf("\rgood\n");
//
//	return 0;
//}
//�������������н:40000.00
 //һ����$%.2f һ��
//int main()
//{
//	int a = 10;
//	/*int b = a++;*///����++����ʹ�ã���++
//	/*int c = --a;*///ǰ��++����++����ʹ��
//	int d = a--;
//	printf("%d\n", a);
//	/*printf("%d\n", b);*/
//	/*printf("%d\n", c);*/
//	printf("% d\n", d);
//	return 0;
//}
//int main()
//{
//	int q = (int)3.14;//()ǿ������ת�� double---int
//	p5;rintf("%d\n", q);
//	return 0;
//
//}
//  !=��˼�ǲ����ڣ�==�ǵ���
//int main()
//{
//	int a = 3;//0 Ϊ�� ������Ϊ�棬
//	int b = 0;
//	int c = a && b;//&&�߼��루�ж�����������٣�
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 3;//0 Ϊ�� ������Ϊ�棬
//	int b = 5;
//	int c = a || b;//  ||�߼����ж�����������٣����ٲż�
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
//	max = (a > b ? a : b);//��������������Ŀ��������exp1?exp2:exp3(��������a�ı��ʽ�����exp2,�������exp3)
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	arr[4];//[]-�±����ò�����
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
//1 --����--32 ����λ
//-1 --����--32 ����λ
//[0][][][][][][][][][][][][][][][][][][][][][][][]//���λ��0���Ǹ���
//[1][][][][][][][][][][][][][][][][][][][][][][][]//���λ��1��������
//ԭ��111111111111111111111111
//����100000000000000000000000��λȡ���������λ��
//����100000000000000000000001����+1��ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����ԭ�룬���룬���붼��ͬ
//�����油��
//int main()
//{
//	register int z = 1;//�ֲ�����--�Զ�������auto��
//	return 0;//register--�����z����Ϊ�Ĵ�������
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
//	static int b = 1; //��һ����̬�ľֲ�����
//	b++;
//	printf("%d\n", b);
//}//static���ξֲ�������ʹ�ֲ������������ڱ䳤
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
//	extern int g_val;//����ȫ�ֱ������ı��˱�����������
//	printf("g_val = %d\n", g_val);
//	return 0;
//}//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
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