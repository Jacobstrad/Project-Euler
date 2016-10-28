#include <stdio.h>

	int main(int argc, char *argv)
	{
		int t1 = 1, t2 = 1, t3 = 0;
		int sum;
		
		while(sum < 4000000)
		{
			t3 = t1 + t2;
			if(t3%2 == 0)
			{
				sum += t3;
			}
			t1 = t2;
			t2 = t3;
		}
		printf("%d", sum);
		return 0;
	}
			

				
			
