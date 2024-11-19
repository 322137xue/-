// 请补充fun函数，该函数的功能是：把主函数中输入的字符串str2接在字符串str1后面。例如：str1=”How  are”,str2=”you?”,结果输出：How  are  you? 
//注意：部分源程序给出如下，请勿改动主函数main和其他函数中的任何内容，仅在fun函数内部的标号处填入所编写的若干表达式或语句。
#include <stdio.h>
#include <conio.h>
#define	N 40
void fun(char *str1, char *str2)
{
	int i = 0;
	char *p1 = str1; 
	char *p2 = str2; 
//*(p1 + i)!= '\0'
while (*(p1 + i)!= '\0')
		i++;
//*p2!=’\0’
	for (; *p2!='\0'; i++)
// *p2 
		*(p1+i) =*p2 ;
	*(p1+i) = '\0';
}
int main()
{
	char str1[N], str2[N]; 
	int	m, n, k;
	printf("******* 输入字符串 str1 & str2*******\n "); 
	printf(" \nstr1:");
	gets(str1); 
	printf(" \nstr2:"); 
	gets(str2);
	printf("******* 原来的字符串 str1 & str2*******\n"); 
	puts(str1);
	puts(str2); 
	fun(str1, str2);
	printf("******* 新字符串 *******\n"); 
	puts(str1);
	return 0;
}