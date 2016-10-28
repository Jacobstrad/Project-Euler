#include <stdio.h>
	int prime_number(int);
		
	int main(int argc, char *argv)
	{
		int i;  
		int prime;
		
		for(i = 1; i < 600851475143; i++)
		{
			if(600851475143%i == 0)
			{
				if(prime_number(i) == 0)
				{
					continue;
				}
				else if(prime_number(i) != 0)
				{
					printf("%d is a prime factor\n", i);	
				}	
		
			}
			
				
		}
		return 0;
	}

	int prime_number(int i)
	{
		int x, test;
		for(x = 2; x < i; x++)
		{
			test = i%x;
			if(test == 0)
			{
				break;
			}
			if(test != 0)
			{
				continue;
			}
		}
		return test;
	}

	
		
			
				
			
