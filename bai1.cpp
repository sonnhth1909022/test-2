#include <stdio.h>
int main()
{
	 int T = 2000;
	 int L = 0;
	 int y = 0;
	 while (y<30)
	 {
	        L = T *30/100;
			T = T + L;
			y = y + 1;	
	 }	
	 
	   printf ("T = %d\n", T);
	 
	 return 0;
}
