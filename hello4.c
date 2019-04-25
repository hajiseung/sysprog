#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char* str = "hello world\n";

	FILE* fp = fopen("./hello4.txt","w");
	fputs(str,fp);	
	close(fp);	

	return 0;
}
