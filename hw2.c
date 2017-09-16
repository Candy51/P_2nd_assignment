//프연습 2nd hw 소스코드(이강은)
#include <stdio.h>
#include <math.h>
int menu();
int intervalprime();
int ca_cp();
int ppp();
int checkprime(int n);
int main()
{
	menu();
}
int menu()
{
	int n;
	puts("");
	printf("================MENU=================\n");
	printf("  1.두 구간 사이의 소수 출력하기\n");
	printf("  2.소수,암스트롱수 판별하기\n");
	printf("  3.숫자입력=>숫자=소수+소수 구하기\n");
	puts("");
	printf("메뉴를 선택하세요:");
	scanf("%d", &n);
	if (n == 1)
	{
		intervalprime();
		menu();
	}

	if (n == 2)
	{
		ca_cp();
		menu();
	}

	if (n == 3)
	{
		ppp();
		menu();
	}

	else if(n!=1||n!=2||n!=3)
	{
		printf("잘못입력했습니다.\n");
		menu(n);
	}
	checkprime(n);
	return 0;
}
int intervalprime()
{
	int n, m, i = 1, count;
	printf("두개의 정수를 입력하세요(두 정수사이의 소수 출력):");
	scanf("%d %d", &n, &m);
	for (; n < m; n++)
	{
		count = 0;
		for (i = 1; i <= n; i++)
		{
			if (n%i == 0)
				count++;
		}
		if (count == 2)
			printf("%3d", n);
	}
	return 0;
}

int ca_cp()
{
	//소수 분별
	int i, n1, n2, n3, r, count, result;
	puts("");
	printf("정수를 입력하세요:");
	scanf("%d", &n1);
	
	for (i = 1; i <= n1; i++)
	{
		count = 0;
		if (n1%i == 0)
			count++;
    }
	if (count == 2)
		printf("%d는 소수입니다\n", n1);
	else
		printf("%d는 소수가 아닙니다.\n", n1);
	n2 = n1;
	n3 = n1;
	count = 0, result = 0;
	do
	{
		n1 /= 10;
		count++;
	} while (n1 >= 1);
	printf("%d는 %d자리 숫자입니다\n", n2, count);
	for (i = 1; n2 >= 1; i++)
	{
		r = n2 % 10;
		result += pow(r, count);
		n2 /= 10;
	}
	if (n3 == result)
		printf("%d는 암스트롱 숫자입니다\n", n3);
	else
		printf("%d는 암스트롱 숫자가 아닙니다\n", n3);
	return 0;
}

int ppp()
{
	int n, i, flag = 0;
	puts("");
	printf("양의 정수를 입력하세요:");
	scanf("%d", &n);
	for (i = 2; i <= n / 2; i++)
	{   
		if (checkprime(i) == 1)
		{
		
			if (checkprime(n - i) == 1)
			{
				printf("%d=%d+%d\n", n, i, n - i);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("number %d cannot be expressed as a sum of prime nubers\n", n);
	return  n;
}
int checkprime(int n)
{
	int i; 
	int auto count = 0;//이전 값이 유지되지 않는다.
	for (i = 1; i <= n; i++)
	{
		
		if (n%i == 0)
			count++;
	}
	if (count == 2)
		return 1;
}








