/* xi1_6.c--问题为输出输入的三个数值中的最大者
 * 此问题可以按某种顺序逐步解决
 * 使用一个变量max来存储a和b种的最大者
 * 在max获取a和b中的最大者后，max存储max和c的最大者 
 * 打印max
 * 算法如下
 * S1: max = lar(a, b)
 * S2: max = lar(max, c)
 * S3: print max
 * 子算法lar():
 * 返回两者种的最大者
 */
#include<stdio.h>
int lar(int x, int y);
int main(void)
{
	int a, b, c, max;
	printf("Please enter!\n");
	scanf("%d, %d, %d", &a, &b, &c);
	//printf("a:%d b:%d c:%d", a, b, c);
	max = lar(a, b);
	max = lar(max, c);
	printf("The largest is %d.", max);
	return 0;
}
int lar(int x, int y)
{
	return x > y? x : y;
}

