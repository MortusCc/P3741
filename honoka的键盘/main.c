#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define LEN 200
int CountVK(char str[LEN + 1],int n);
void ChangeVK(char str[LEN + 1],int n);
int main()
{
	int n;
	scanf("%d", &n);
	char str[LEN + 1];
	scanf(" %s", str);
	ChangeVK(str,n);
	int count = CountVK(str,n);
	printf("%d", count);
	return 0;
}
int CountVK(char str[LEN + 1],int n)
{
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] == 'V' && str[i + 1] == 'K')
		{
			count++;
		}
	}
	return count;
}
void ChangeVK(char str[LEN + 1],int n)
{
	int count = CountVK(str, n);
	char temp[LEN + 1];
	for (int i = 0; i < n; i++)
	{
		strcpy(temp, str);
		if (temp[i] == 'V')
		{
			temp[i] = 'K';
		}
		else if (temp[i] == 'K')
		{
			temp[i] = 'V';
		}
		else
		{
			printf("Input Error!\n");
		}
		if (CountVK(temp, n) > count)
		{
			strcpy(str, temp);
			return;
		}
	}
	return;
}