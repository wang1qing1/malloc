#include<stdio.h>
int main()
{
	int s, v,t,h,k;
	scanf_s("%d%d", &s, &v);
	if (s % v != 0)
	{
		t = s / v + 10 + 1;
	}
	else
	{
		t = s / v + 10;
	}
	k = t % 60;
	if (t % 60 != 0)
	{
		h = t / 60 + 1;
	}
	else
	{
		h = t / 60;
	}
	if (t >= 60 * 8)
	{
		printf("%02d:%02d", 24 - (h - 8),60-k);
	}
	else
	printf("%02d:%02d", 8 - h, 60 - k);
	return 0;
}