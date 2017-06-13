#include <cstdio>
void insert(int num1[], int num2[])
{
	if (num1 == nullptr || num2 == nullptr)
	{
		return;
	}
	int length1 = 0;
	while (num1[length1] != 0){
		length1++;
	}
	//printf("num1 length: %d\n", length1);
	int length2 = 0;
	while (num2[length2] != 0){
		//printf("%d ", num2[length2]);
		length2++;
		
	}
	//printf("\n");
	//printf("num2 length: %d\n", length2);
	int length = length1 + length2;
	int index1 = length1 - 1;
	int index11 = index1;
	int index2 = length2 - 1;
	while (index1 >= 0 && index2 >= 0)
	{
		if (num2[index2] <= num1[index1])
		{
			index1--;
			if (index1 == -1)
			{
				
				//for (int i = index1 + 1; i <= index11; i++)
				for (int i = index11; i >= index1 + 1;i--)
				{
					//num1[i + length2] = num1[i];
					num1[i + length2] = num1[i];
				}
				num1[index1 + length2] = num2[index2];
				if (index2 != -1)
				{
					for (int i = 0; i <= index2; i++)
					{
						num1[i] = num2[i];
					}
				}
			}
		}
		else
		{
			
			for (int i = index1 + 1; i <= index11; i++)
			{
				num1[i + length2] = num1[i];
			}
			num1[index1 + length2] = num2[index2];
			index2--;
			index11 = index1;
			length2--;
		}

		
	}
}
void test1()
{
	printf("test1() \n");
	int num1[40] = { 5, 9, 42, 79 };
	int num2[4] = { 1, 1, 1 };
	insert(num1, num2);
	int length1 = 0;
	while (num1[length1] != 0)
	{
		printf("%d ", num1[length1]);
		length1++;
	}
	printf("\n");
}
void test2()
{
	printf("test2() \n");
	int num1[40] = { 2,4,5,6,7,9 };
	int num2[4] = {1,3,6 };
	insert(num1, num2);
	int length1 = 0;
	while (num1[length1] != 0)
	{
		printf("%d ", num1[length1]);
		length1++;
	}
	printf("\n");
}
void test3()
{
	printf("test3()\n");
	int num1[40] = { 5, 9, 42, 79 };
	int num2[4] = { 80,80,80 };
	insert(num1, num2);
	int length1 = 0;
	while (num1[length1] != 0)
	{
		printf("%d ", num1[length1]);
		length1++;
	}
	printf("\n");
}
void test4()
{
	printf("test4()\n");
	int num1[40] = { 5, 9, 42, 79 };
	int num2[4] = { 8,8,8};
	insert(num1, num2);
	int length1 = 0;
	while (num1[length1] != 0)
	{
		printf("%d ", num1[length1]);
		length1++;
	}
	printf("\n");
}
void test5()
{
	printf("test5()\n");
	int num1[40] = { 5, 9, 42, 79 };
	int num2[7] = { 1,2,3,5,9,400};
	insert(num1, num2);
	int length1 = 0;
	while (num1[length1] != 0)
	{
		printf("%d ", num1[length1]);
		length1++;
	}
	printf("\n");
}
int main(void)
{
	test1();
	test2();
	test3();
	test4();
	test5();

	getchar();
	return 0;
}