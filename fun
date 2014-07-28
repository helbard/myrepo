#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int a=2;
	int b=3;
	int c;
	int loop=0;
	
	//-------------------------------Zufallsgenerator------------------------
	//-----------------------------------------------------------------------
	int i;
    time_t t;

    time(&t);
    srand((unsigned int)t);              /* Zufallsgenerator initialisieren */
	
	for(loop=0;loop<3;loop++)
	{
	a = rand() % 9 + 0;
	b = rand() % 9 + 0;

	c = a + b;
	printf("Addition: %d\n",c);
	
	d= a * b;
	printf("Multiplikation: %d\n",d);
	}
	
	
	return 0;
}
