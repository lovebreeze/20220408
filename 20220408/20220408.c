#include <stdio.h>

int main()
{	
	/* {
	float value = 10.0;
	printf("%.6f", value);
	}*/

	//10

	//00001010

	// 10진수의 수를 2진수로 변환
	// unsingen char의 크기만 입력받을수 있다.
	//10
	//00001010
	/*
	{
	int a;
	scanf_s("%d", &a);
	int arr[9]={0};
	for (int i = 0; a > 0; i++) {


		if (a % 2 == 0)
		{
			arr[i] = 0;
		}
		else
		{
			arr[i] = 1;
		}

		a = a / 2;
	}
	for (int i = 7; i >= 0; i--) {

		printf("%d", arr[i]);
	}
	}*/


	//최소 공배수

	int b,c;

	scanf_s("%d %d", &b, &c);
	int max = 1;
	int bcmx = 0;
	if (b >= c)
		bcmx = b;
	else
		bcmx = c;

	int min = 1;


	int ans = 0;

	for (int i = bcmx; i >= 1; i--)
	{
		if (b % i == 0 && c % i == 0)
		{
			b = b / i;
			c = c / i;
			max = max * i;
		}
	}

	printf("%d ", max);
	printf("%d %d ", b,c);
	
	printf("%d", max * b * c);



	return 0;
}
