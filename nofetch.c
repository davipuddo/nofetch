#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (void)
{
	srand(time(NULL));
	int r1 = rand() % 1000;
	double wait_time = ((double)r1/1000.0) + 1.25;
	sleep(wait_time);
	return(0);
}
