#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
//��ѧ����I  p34  ��2-3�κ�ϰ��������
int speed(float l, float g, float angle)
{
	double pi = acos(-1.0);
	printf("С�������Ϊ(��λ:m/s):%.2f\n", sqrt(l * g * sin(angle / 180.0 * pi)));
	return 0;
}
int tension(float m, float g, float angle)
{
	double pi = acos(-1.0);
	printf("���ϵ�����Ϊ(��λ:N):%.2f\n", 3 * m * g * sin(angle / 180.0 * pi));
	return 0;
}
int main()
{
	float m, l, angle, g;
	printf("�������������ٶ�g:"); scanf("%f", &g);
	printf("������С�������m(��λ:kg):"); scanf("%f", &m);
	printf("����������l(��λ:m):"); scanf("%f", &l);
	printf("������������ˮƽ����ļнǦ�(�Ƕ���):"); scanf("%f", &angle);
	speed(l, g, angle); tension(m, g, angle);
	return 0;
}