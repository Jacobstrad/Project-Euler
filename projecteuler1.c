#include <stdio.h>

	int main(int argc, char *argv)
	{
		int mult3, mult5, multboth;
		int sum = 0; 
		int i;
			for(i = 0; i < 1000; i++)
			{
				if(i%3 == 0)
				{
					sum += i;
				}	
				if(i%5 == 0)
				{
					sum += i;
				}
				if(i%5 == 0 && i%3 == 0)
				{
					sum -= i;
				}
			}
		printf("%d", sum);
			return 0;
	}
					
		
				
