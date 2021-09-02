#include <stdio.h>
#include <math.h>
/*
	1. Find the factors of given number
	2. If the factor is prime, then print
*/
//Uses recurssion
void Pfactor(int n, int i)
{
    if(i <= n)
    {
        
        if(n % i == 0)   // Finds the factors
        {
            int j = 2;
            int flag = 1;
            while(j <= sqrt(i))  //Checks whether the given factor is prime or not 
            {
                if (i%j == 0) flag = 0;
                j++;
            }

             if(flag) printf("%d ", i);
        }

        Pfactor(n, i+1);
    }
}


int main(void)
{
    Pfactor(315,2);
}