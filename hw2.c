//������ 2nd hw �ҽ��ڵ�(�̰���)
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
	printf("  1.�� ���� ������ �Ҽ� ����ϱ�\n");
	printf("  2.�Ҽ�,�Ͻ�Ʈ�ռ� �Ǻ��ϱ�\n");
	printf("  3.�����Է�=>����=�Ҽ�+�Ҽ� ���ϱ�\n");
	puts("");
	printf("�޴��� �����ϼ���:");
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
		printf("�߸��Է��߽��ϴ�.\n");
		menu(n);
	}
	checkprime(n);
	return 0;
}
int intervalprime()
{
	int n, m, i = 1, count;
	printf("�ΰ��� ������ �Է��ϼ���(�� ���������� �Ҽ� ���):");
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
	//�Ҽ� �к�
	int i, n1, n2, n3, r, count, result;
	puts("");
	printf("������ �Է��ϼ���:");
	scanf("%d", &n1);
	
	for (i = 1; i <= n1; i++)
	{
		count = 0;
		if (n1%i == 0)
			count++;
    }
	if (count == 2)
		printf("%d�� �Ҽ��Դϴ�\n", n1);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n1);
	n2 = n1;
	n3 = n1;
	count = 0, result = 0;
	do
	{
		n1 /= 10;
		count++;
	} while (n1 >= 1);
	printf("%d�� %d�ڸ� �����Դϴ�\n", n2, count);
	for (i = 1; n2 >= 1; i++)
	{
		r = n2 % 10;
		result += pow(r, count);
		n2 /= 10;
	}
	if (n3 == result)
		printf("%d�� �Ͻ�Ʈ�� �����Դϴ�\n", n3);
	else
		printf("%d�� �Ͻ�Ʈ�� ���ڰ� �ƴմϴ�\n", n3);
	return 0;
}

int ppp()
{
	int n, i, flag = 0;
	puts("");
	printf("���� ������ �Է��ϼ���:");
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
	int auto count = 0;//���� ���� �������� �ʴ´�.
	for (i = 1; i <= n; i++)
	{
		
		if (n%i == 0)
			count++;
	}
	if (count == 2)
		return 1;
}








