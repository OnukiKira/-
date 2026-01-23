#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b, c, D, x1, x2;
	
	printf("Enter a b c for ax^2+bx+c=0 >>> ");
	scanf("%1f %1f %1f", &a, &b, &c); // double型は%1fを用いて入力する
	
	if (a == 0.0)
	{
		printf("The coefficient is wrong.\n");
	}
	else // 判別式での判断により解の有無を調べる
	{
		D = b * b - 4 * a * c; // 判別式D
		if (D >= 0.0)          // 判別式Dが0以上
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			if (D == 0) // 重解
			{
				printf("The solution is a multiple solution, %g.\n", x1);
			}
			else
			{
				printf("The solution is %g and %g.\n", x1, x2);
			}
		}
		else // 判別式が0より小さい
		{
			printf("There is no solution because it is an imaginary solution.\n");
		}
	}
	
	return 0;
}