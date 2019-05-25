/* xi1_5.c--
 * 打印如下字符
 * ************
 * Very good!
 * ************
 * 为解决这个问题，
 * 首先打印“*******”
 * 接着换行
 * 接着打印“Very good!”
 * 接着换行
 * 接着打印“*********”
 * 可以将换行符与“Very good!”合并成一个字符串
 * 这样，只须
 * 打印星号
 * 打印字符串S
 * 打印星号
 * 程序应该有两个字符串常量来储存星号和字符
 * 第一个字符串常量为“****”
 * 第二个字符串常量为“\nVery good!\n”
 * 其算法可以表示为
 * S1 打印字符串"*********"
 * S2 打印字符串“\nVery good！\n”
 * S3 打印字符串"**********"
 * S4 结束
 */
#include<stdio.h>
#define START "***********"
#define GREET "\nVery good!\n"
int main(void)
{
	printf("%s", START);
	printf("%s", GREET);
	printf("%s", START);
	return 0;
}
