#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int noc=0,nob=0,nota=0,non=0;
	fp=fopen("file3.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		noc++;
		if(ch==' ')
		nob++;
		if(ch=='\t')
		nota++;
		if(ch=='\n')
		non++;
	}
	printf("NO. OF CHARACTERS= %d\n",noc);
	printf("NO. OF BLANKS= %d\n",nob);
	printf("NO. OF TABS= %d\n",nota);
	printf("NO. OF NEW LINES= %d\n",non);
	fclose(fp);
}