#include<stdio.h>
int main()
{
	int count=0;
	int i=0;
	FILE *fp;
	fp= fopen("file.txt","r");
	
	while(i<count)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		printf("%c",fgetc(fp));
	}
	printf("\n");
	fclose(fp);
	
}
