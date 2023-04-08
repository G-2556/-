#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
//大学物理I  p34  例2-3课后习题计算程序
int speed(float l, float g, float angle)
{
	double pi = acos(-1.0);
	printf("小球的速率为(单位:m/s):%.2f\n", sqrt(l * g * sin(angle / 180.0 * pi)));
	return 0;
}
int tension(float m, float g, float angle)
{
	double pi = acos(-1.0);
	printf("绳上的拉力为(单位:N):%.2f\n", 3 * m * g * sin(angle / 180.0 * pi));
	return 0;
}
int main()
{
	float m, l, angle, g;
	printf("请输入重力加速度g:"); scanf("%f", &g);
	printf("请输入小球的质量m(单位:kg):"); scanf("%f", &m);
	printf("请输入绳长l(单位:m):"); scanf("%f", &l);
	printf("请输入绳子与水平方向的夹角θ(角度制):"); scanf("%f", &angle);
	speed(l, g, angle); tension(m, g, angle);
	return 0;
}