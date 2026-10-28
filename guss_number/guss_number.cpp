#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int Guess_Number, choice, Guessing_Number,amttp;
	srand((unsigned)time(NULL));
	Guess_Number = rand() % 100 + 1;
	for (;;)
	{
		printf("要猜数吗，请输入0（开始）/1（结束）\n");
		scanf_s("%d", &choice);
		if (choice == 0)
		{
			amttp = 0;
			for (;;)
			{
				printf("请输入数字：");
				if (scanf_s("%d", &Guessing_Number) != 1)     
				{
					printf("这不是数字，重新输一次\n");
					while (getchar() != '\n');                
					continue;                                 
				}
				if (Guessing_Number > Guess_Number)
				{
					printf("数猜大了，再试一次\n");
					amttp++;
				}
				else if (Guessing_Number < Guess_Number)
				{
					printf("数猜小了，再试一次\n");
					amttp++;
				}
				else if (Guessing_Number == Guess_Number)
				{
					amttp++;
					printf("恭喜，正确了，总共用了%d次\n", amttp);
					while (getchar() != '\n');
					break;
				}
			}
		}
		else if (choice == 1)
		{
			return 0;
		}
		else
		{
			printf("输入有误,再输一次\n");
			while (getchar() != '\n');
		}
	}
	return 0;
}