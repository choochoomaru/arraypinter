#include <stdio.h>
void main()
{
	int a,b,c;
	char arr[127][127][127];
	printf("Table 1\tTable 2\tTable 3\tTable 4\tTable 5\tTable 6\tTable 7\tTable 8\tTable 9\tTable 10");
	for(a=0;a<=127;++a)
	{
		printf("Table 1\tTable 2\tTable 3\tTable 4\tTable 5\tTable 6\tTable 7\tTable 8\tTable 9\tTable 10");
		for(b=0;b<=127;++b)
		{
			printf("Table 1\tTable 2\tTable 3\tTable 4\tTable 5\tTable 6\tTable 7\tTable 8\tTable 9\tTable 10");
			for(c=0;c<=127;++c)
			{
			printf("%s%d%d%d\t", arr[a][b][c],a,b,c);
			}
		}
	}
	puts("Process Completed!");
	system("pause");
}
